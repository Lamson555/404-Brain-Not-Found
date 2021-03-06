#include "dbmanager.h"

DBManager::DBManager()
{
    // Connecting to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("D:/GitHub/404-Brain-Not-Found/CS1D Project 2/CS1DProject2.db");

    if(!m_database.open())
    {
        qDebug() << "problem opening database" << endl;
    }
}

DBManager::~DBManager(){}

/*******************************************************
* loadEntries() -
*  This function helps the program read the contents.
*  from the database. This function primarily uses
*  the query function, "select * from". The database
*  in which it is selected from is called customer.
*  Throughout the process, the data returned is
*  is stored in the table created in createTable().
*  If the database or data has trouble storing the
*  values, it will output "error loading values to
*  db". Returns pointer
*******************************************************/
QSqlQueryModel *DBManager::loadStadiumInfo()
{

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT TEAM_NAME, STADIUM_NAME, LOCATION FROM STADIUM");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::loadSouvenirs()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT TEAM, SOUVENIR, PRICE FROM SOUVENIRS");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager:: loadStartingTeam()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT TEAM_NAME FROM STADIUM");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::loadTourQueueData()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT Queue FROM TourData");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::loadNextDestination()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT DISTINCT endingCollege FROM CollegeDistances");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

// loadVISITED_STADIUMSTable() - Returns a QSqlQueryModel consisting of information from AlreadyVisitedColleges table
QSqlQueryModel *DBManager::loadVISITED_STADIUMSTable()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT CollegeName from AlreadyVisitedColleges;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::LoadSouvenirsByStadium(QString collegeName, bool souvenirsOnly)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;

    if(!souvenirsOnly) {
        qry.prepare("SELECT * from Souvenirs where college = '"+collegeName+"';");
    }
    else {
        qry.prepare("Select traditionalSouvenirs from Souvenirs where college = '"+collegeName+"';");
    }

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

    // GetSouvenirPrice() - Returns price of the corresponding item at a given stadium name
double DBManager::GetSouvenirPrice(QString STADIUM_NAME, QString itemName)
{
    double price;
    QSqlQuery qry;

    qry.prepare("select printf(\"%.2f\", sum(cost)) as \"Price\" from Souvenirs where STADIUM_NAME = '"+STADIUM_NAME+"' "
                "and traditionalSouvenirs = '"+itemName+"';");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    if(qry.next()) {
        price = qry.value(0).toDouble();
    }
    return price;
}

// BeginTrip() - Will recursively order the trip in terms of efficiency
void DBManager::BeginTrip(QString startingCollege, QVector<QString> collegesVector, double &totalDistance)
{
    QSqlQuery qry;
    collegesVector.pop_front(); // pops front of the vector

    // Base case: if vector is empty, exit
    if(collegesVector.isEmpty()) {
        return;
    }

    // General case
    QString closestCollege;
    qry.prepare("Select endingCollege from CollegeDistances where distanceBetween = "
                "(Select min(distanceBetween) from CollegeDistances where startingCollege = '"+startingCollege+"' and "
                "endingCollege not in (Select CollegeName from AlreadyVisitedColleges) and endingCollege in "
                "(Select Queue from TourData)) and startingCollege = '"+startingCollege+"';");

    // Stores the closest college into the string
    if(!qry.exec()) {
        qDebug() << "Can't execute closes college sql statement!";
    }
    if(qry.next()) {
        closestCollege = qry.value(0).toString();
     }

    // Will accumulate distance traveled from startingCollege to closestCollege
    qry.prepare("Select distanceBetween from CollegeDistances where startingCollege = '"+startingCollege+"' and endingCollege = '"+closestCollege+"';");
    if(!qry.exec()) {
        qDebug() << "Can't compute total distance!";
    }
    double distanceTraveled;
    if(qry.next()) {
       distanceTraveled = qry.value(0).toDouble();
    }
    totalDistance += distanceTraveled;
    qDebug() << totalDistance;


    // Insert into AlreadyVisitedColleges table the closest college
    qry.prepare("Insert into AlreadyVisitedColleges(CollegeName) VALUES('"+closestCollege+"');");
    if(!qry.exec()) {
        qDebug() << "Can't insert closestCollege into AlreadyVisitedColleges";
    }

    // changes startingCollege to be closestCollege, and calls the function again
    startingCollege = closestCollege;
    BeginTrip(startingCollege, collegesVector, totalDistance);
}

