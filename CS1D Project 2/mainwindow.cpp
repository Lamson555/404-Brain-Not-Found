#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/Images/MainWindow_Logo.png");

    int w = ui->MainWindowLogo->width();
    int h = ui->MainWindowLogo->height();
    ui->MainWindowLogo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->stackedWidget->setCurrentWidget(ui->MainMenu);

    totalPrice = 0;
    currentPrice = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

// GetPicturePath() - Gets college picture path depending on the college passed in
QString MainWindow::GetPicturePath(QString STADIUM_NAME)
{
    // PROCESSING - Sets pixel depending on what college the first college is
    QString picturePath;

    if(STADIUM_NAME == "Arizona State University") {
       picturePath = ":/Images/College Images/Arizona state.jpg";
    }
    else if(STADIUM_NAME == "Massachusetts Institute of Technology (MIT)") {
       picturePath = ":/Images/College Images/MIT.jpg";
    }
    else if(STADIUM_NAME == "Northwestern") {
       picturePath = ":/Images/College Images/Northwestern.jpg";
    }
    else if(STADIUM_NAME == "Ohio State University") {
       picturePath = ":/Images/College Images/Ohio state.jpg";
    }
    else if(STADIUM_NAME == "Saddleback College") {
       picturePath = ":/Images/College Images/Saddleback college.jpg";
    }
    else if(STADIUM_NAME == "University of  Michigan") {
       picturePath = ":/Images/College Images/University of Michigan.jpg";
    }
    else if(STADIUM_NAME == "University of California, Irvine (UCI)") {
       picturePath = ":/Images/College Images/UCI.jpg";
    }
    else if(STADIUM_NAME == "University of California, Los Angeles (UCLA)") {
       picturePath = ":/Images/College Images/UCLA.jpg";
    }
    else if(STADIUM_NAME == "University of Oregon") {
       picturePath = ":/Images/College Images/University of Oregon.jpg";
    }
    else if(STADIUM_NAME == "University of Wisconsin") {
       picturePath = ":/Images/College Images/University of Wisconsin.jpg";
    }
    else if(STADIUM_NAME == "University of the Pacific") {
       picturePath = ":/Images/College Images/University of the Pacific.jpg";
    }
    else if(STADIUM_NAME == "California State University, Fullerton") {
       picturePath = ":/Images/College Images/Cal state fullerton.jpg";
    }
    else if(STADIUM_NAME == "University of Texas") {
       picturePath = ":/Images/College Images/University of Texas.jpg";
    }
    return picturePath;
}

// Gets college's description
QString MainWindow::GetStadiumDescription(QString collegeName)
{
    // PROCESSING - Sets description depending on what college the college is
    QString collegeDescription;

    if(collegeName == "Arizona State University") {
       collegeDescription = "Arizona State University (commonly referred to as ASU or Arizona State) is a public metropolitan "
                            "research university[7] on five campuses across the Phoenix metropolitan area,[8] and four regional "
                            "learning centers throughout Arizona. ASU is one of the largest public universities by enrollment in "
                            "the U.S.[9] As of fall 2019, the university had nearly 90,000[3] students attending classes across its metro campuses, "
                            "more than 38,000[3] students attending online, including 83,000-plus[3] undergraduates and more nearly 20,000[3] postgraduates";
    }
    else if(collegeName == "Massachusetts Institute of Technology (MIT)") {
       collegeDescription = "Massachusetts Institute of Technology (MIT) is a private research university in Cambridge, Massachusetts. "
                            "The Institute is a land-grant, sea-grant, and space-grant university, with an urban campus that extends more than a mile (1.6 km) "
                            "alongside the Charles River. The Institute also encompasses a number of major off-campus facilities such as the MIT Lincoln Laboratory, "
                            "the Bates Center, and the Haystack Observatory, as well as affiliated laboratories such as the Broad and Whitehead Institutes. "
                            "Founded in 1861 in response to the increasing industrialization of the United States, MIT adopted a European polytechnic university "
                            "model and stressed laboratory instruction in applied science and engineering. It has since played a key role in the development of "
                            "many aspects of modern science, engineering, mathematics, and technology, and is widely known for its innovation and academic "
                            "strength, making it one of the most prestigious institutions of higher learning in the world.[11][12][13][14]";
    }
    else if(collegeName == "Northwestern") {
       collegeDescription = "Northwestern University (NU) is a private research university based in Evanston, Illinois, with other campuses in Chicago and Doha, "
                            "Qatar, and academic programs and facilities in Miami, Florida; Washington, D.C.; and San Francisco, California.[5][6][7] "
                            "Along with its selective undergraduate programs, Northwestern is known for its Kellogg School of Management, Pritzker School of Law, "
                            "Feinberg School of Medicine, Bienen School of Music, Medill School of Journalism, Media, Integrated Marketing Communications, "
                            "School of Communication, and McCormick School of Engineering and Applied Science.";
    }
    else if(collegeName == "Ohio State University") {
       collegeDescription = "Ohio State University (OSU, commonly referred to as Ohio State) is a public research university in Columbus, Ohio. "
                            "Founded in 1870 as a land-grant university and the ninth university in Ohio with the Morrill Act of 1862,[5] "
                            "the university was originally known as the Ohio Agricultural and Mechanical College. The college originally "
                            "focused on various agricultural and mechanical disciplines but it developed into a comprehensive university "
                            "under the direction of then-Governor (later, U.S. president) Rutherford B. Hayes, and in 1878 the Ohio General "
                            "Assembly passed a law changing the name to \"The Ohio State University\".[6] ";
    }
    else if(collegeName == "Saddleback College") {
       collegeDescription = "Saddleback College (commonly referred to as Saddleback) is a public community college in Mission Viejo, California. "
                            "It is part of the California Community College system and awards over 300 associate degrees, academic certificates, "
                            "and occupational skills awards in 190 programs. Established in 1968, Saddleback is the oldest and southern-most "
                            "institution governed by the South Orange County Community College District. Saddleback College got its name from the "
                            "slump (or Saddleback) between the twin peaks of Santiago Peak and Modjeska Peak in the Cleveland National Forest.";
    }
    else if(collegeName == "University of  Michigan") {
       collegeDescription = "The University of Michigan (UM, U-M, U of M, or UMich), often simply referred to as Michigan, is a public research university "
                            "in Ann Arbor, Michigan. The university is Michigan's oldest; it was founded in 1817 in Detroit, as the Catholepistemiad, or "
                            "University of Michigania, 20 years before the territory became a state. The school was moved to Ann Arbor in 1837 onto 40 acres "
                            "(16 ha) of what is now known as Central Campus. Since its establishment in Ann Arbor, the flagship university campus has expanded "
                            "to include more than 584 major buildings with a combined area of more than 34 million gross square feet (780 acres; 3.2 km2) "
                            "spread out over a Central Campus and North Campus, two regional campuses in Flint and Dearborn, and a Center in Detroit. "
                            "The university is a founding member of the Association of American Universities.";
    }
    else if(collegeName == "University of California, Irvine (UCI)") {
       collegeDescription = "The University of California, Irvine (UCI or UC Irvine)[8] is a public research university in Irvine, California. "
                            "It is one of the 10 campuses in the University of California (UC) system. UC Irvine offers 87 undergraduate degrees "
                            "and 129 graduate and professional degrees. The university is classified as a Research I university and in 2017 had "
                            "$361 million in research and development expenditures, according to the National Science Foundation.[9] UC Irvine "
                            "became a member of the Association of American Universities in 1996 and is the youngest university to hold membership.";
    }
    else if(collegeName == "University of California, Los Angeles (UCLA)") {
       collegeDescription = "The University of California, Los Angeles (UCLA)[1] is a public research university in Los Angeles. "
                            "It became the Southern Branch of the University of California in 1919, making it the fourth-oldest (after UC Berkeley, "
                            "UC San Francisco, and UC Davis) of the 10-campus University of California system and oldest of the campuses in Southern California."
                            "[11] It offers 337 undergraduate and graduate degree programs in a wide range of disciplines.[12] UCLA enrolls about "
                            "31,500 undergraduate and 12,800 graduate students[7] and had 119,000 applicants for Fall 2016, including transfer applicants, "
                            "making the school the most applied-to of any American university.[13]";
    }
    else if(collegeName == "University of Oregon") {
       collegeDescription = "The University of Oregon (also referred to as UO, U of O or Oregon) is a public flagship[6][7][8] research university "
                            "in Eugene, Oregon. Founded in 1876,[9] the institution's 295-acre campus is along the Willamette River.[10] "
                            "Since July 2014, UO has been governed by the Board of Trustees of the University of Oregon.[11] The university has a "
                            "Carnegie Classification of \"highest research activity\"[12] and has 19 research centers and institutes.[13] UO was "
                            "admitted to the Association of American Universities in 1969.[14]";
    }
    else if(collegeName == "University of Wisconsin") {
       collegeDescription = "The University of Wisconsin–Madison (also known as University of Wisconsin, Wisconsin, UW, regionally as UW–Madison, "
                            "or simply Madison, or Wisconsin sportily) is a public research university in Madison, Wisconsin. Founded when Wisconsin "
                            "achieved statehood in 1848, UW–Madison is the official state university of Wisconsin, and the flagship campus of the "
                            "University of Wisconsin System. It was the first public university established in Wisconsin and remains the oldest and "
                            "largest public university in the state. It became a land-grant institution in 1866.[6] The 933-acre (378 ha) main campus, "
                            "located on the shores of Lake Mendota, includes four National Historic Landmarks.[7] The University also owns and operates "
                            "a historic 1,200-acre (486 ha) arboretum established in 1932, located 4 miles (6.4 km) south of the main campus.[8]";
    }
    else if(collegeName == "University of the Pacific") {
       collegeDescription = "University of the Pacific (Pacific or UOP) is a private Methodist-affiliated university with campuses in Sacramento, "
                            "San Francisco, and Stockton, California. It is the oldest chartered university in California,[4] the first independent "
                            "coeducational campus in California, and both the first conservatory of music and first medical school on the West Coast.";
    }
    else if(collegeName == "California State University, Fullerton") {
       collegeDescription = "California State University, Fullerton (CSUF or Cal State Fullerton) is a public university in Fullerton, "
                            "California. With a total enrollment of about 40,400, it has the largest student body of the 23-campus California "
                            "State University (CSU) system, and its approximately 5,800 graduate student body is also the largest in the CSU "
                            "and one of the largest in all of California. As of Fall 2016, the school had 2,083 faculty, of which 782 were on the tenure track.[6]";
    }
    else if(collegeName == "University of Texas") {
       collegeDescription = "The University of Texas at Austin (UT Austin) is a public research university in "
                            "Austin, Texas. It was founded in 1883 and is the flagship institution of the University of Texas System.[8] "
                            "The University of Texas was inducted into the Association of American Universities in 1929, becoming only the "
                            "third university in the American South to be elected. The institution has the nation's eighth-largest single-campus "
                            "enrollment, with over 50,000 undergraduate and graduate students and over 24,000 faculty and staff.[9]";
    }

    return collegeDescription;
}
    //---------------------------MAIN MENU CODE-----------------------------------------//


/*******************************************************
 * on_loginPushBtn2_clicked() -
 *  This function error checks for right username and
 *  password. If admin logs in, then the program will
 *  display the admin page.
 *******************************************************/
void MainWindow::on_loginPushBtn_2_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if(username == "admin" && password == "admin")
    {
        // Changes to admin page
        qDebug() << "Access granted";
        adminObj.show();
    }
    else
    {
        // Displays error message
        QMessageBox::warning(this, "Login", "Username or password is not correct");
    }
}

void MainWindow::keyPressEvent(QKeyEvent* pe)
{
if(pe->key() == Qt::Key_Return) on_loginPushBtn_2_clicked();                   //Enter Key works as input for buttonLogin()
}

/*******************************************************
 * on_clearPushBtn_clicked() -
 *  Once a user presses the clear button, it will clear
 *  the username and password line edits
 *******************************************************/
void MainWindow::on_clearPushBtn_2_clicked()
{
    ui->usernameLineEdit->clear();
    ui->passwordLineEdit->clear();
}

//void MainWindow::showTable(QSqlQueryModel *model)
//{
//    ui->tableView->setModel(model);     // showTable() shows the QSqlQueryModel database model to the tableview
//    ui->QueueTableView->setModel(model);
//}

void MainWindow::on_DisplayCampusInfo_clicked()
{
    //showTable(databaseObj.loadCampusInfo());
    ui->tableView->setModel(databaseObj.loadStadiumInfo());
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::on_DisplaySouvenirs_clicked()
{
    //showTable(databaseObj.loadSouvenirs());
    ui->tableView->setModel(databaseObj.loadSouvenirs());
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::on_StartTour_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

    //----------------------------PLANNING PAGE CODE-----------------------------------------//

void MainWindow::on_SelectStartingTeamButton_clicked()
{
    QString SelectedTeam = ui->StartingTeamComboBox->currentText();

    qDebug() << SelectedTeam;

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                " FROM STADIUM where TEAM_NAME='"+SelectedTeam+"'");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    ui->DistancesTable->setModel(model);

}

//void MainWindow::on_StartingTeamComboBox_currentIndexChanged(const QString &arg1)
//{
//    QString SelectedTeam = ui->StartingTeamComboBox->currentText();

//    qDebug() << SelectedTeam;

//    QSqlQueryModel* model = new QSqlQueryModel();

//    QSqlQuery qry;
//    qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
//                " FROM STADIUM where TEAM_NAME='"+SelectedTeam+"'");

//    if(!qry.exec())
//    {
//        qDebug() <<"error Loading values to db" << endl;

//    }

//    model->setQuery(qry);

//    ui->DistancesTable->setModel(model);

//}

// NEW CODE HERE 4/20/2020
void MainWindow::on_ViewLeagueInfo_clicked()
{
    QString National = "National";
    QString American = "American";

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;

    if(ui->AmericanLeagueCheckBox->checkState() == Qt::Checked && ui->NationalLeagueCheckBox->checkState() == Qt::Unchecked)
    {
        qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                    " FROM STADIUM WHERE LEAGUE = '"+American+"'");
    }
    if(ui->AmericanLeagueCheckBox->checkState() == Qt::Unchecked && ui->NationalLeagueCheckBox->checkState() == Qt::Checked)
    {
        qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                    " FROM STADIUM WHERE LEAGUE = '"+National+"'");
    }
    if(ui->AmericanLeagueCheckBox->checkState() == Qt::Checked && ui->NationalLeagueCheckBox->checkState() == Qt::Checked)
    {
        qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                    " FROM STADIUM");
    }

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    ui->DistancesTable->setModel(model);
}

void MainWindow::on_SortingComboBox_currentIndexChanged(const QString &arg1)
{
    QString National = "National";
    QString American = "American";
    QString Open = "Open";

    QString SortBy = ui->SortingComboBox->currentText();


    qDebug() << SortBy;

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;

    // ONLY AMERICAN LEAGUE INFO
    if(ui->AmericanLeagueCheckBox->checkState() == Qt::Checked && ui->NationalLeagueCheckBox->checkState() == Qt::Unchecked)
    {
        if(SortBy == "Team Name")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+American+"' ORDER BY TEAM_NAME");
        }
        if(SortBy == "Stadium Name")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+American+"' ORDER BY STADIUM_NAME");
        }
        if(SortBy == "Park Typology")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+American+"' ORDER BY BALLPARK_TYPOLOGY");
        }
        if(SortBy == "Open Roof")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+American+"' AND ROOF_TYPE = '"+Open+"' ORDER BY TEAM_NAME");
        }
        if(SortBy == "Date Opened")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+American+"' ORDER BY DATE_OPENED");
        }
        if(SortBy == "Total Capacity")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+American+"' ORDER BY SEATING_CAP");
        }
        if(SortBy == "Center Field Distance (Greatest)")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+American+"' AND CENTER_DISTANCE = (SELECT MAX(CENTER_DISTANCE) FROM STADIUM) ORDER BY TEAM_NAME");
        }
        if(SortBy == "Center Field Distance (Smallest)")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+American+"' AND CENTER_DISTANCE = (SELECT MIN(CENTER_DISTANCE) FROM STADIUM) ORDER BY TEAM_NAME");
        }
    }

    // ONLY NATIONAL LEAGUE INFO
    if(ui->AmericanLeagueCheckBox->checkState() == Qt::Unchecked && ui->NationalLeagueCheckBox->checkState() == Qt::Checked)
    {
        if(SortBy == "Team Name")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+National+"' ORDER BY TEAM_NAME");
        }
        if(SortBy == "Stadium Name")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+National+"' ORDER BY STADIUM_NAME");
        }
        if(SortBy == "Park Typology")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+National+"' ORDER BY BALLPARK_TYPOLOGY");
        }
        if(SortBy == "Open Roof")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+National+"' AND ROOF_TYPE = '"+Open+"' ORDER BY TEAM_NAME");
        }
        if(SortBy == "Date Opened")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+National+"' ORDER BY DATE_OPENED");
        }
        if(SortBy == "Total Capacity")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+National+"' ORDER BY SEATING_CAP");
        }
        if(SortBy == "Center Field Distance (Greatest)")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+National+"' AND CENTER_DISTANCE = (SELECT MAX(CENTER_DISTANCE) FROM STADIUM) ORDER BY TEAM_NAME");
        }
        if(SortBy == "Center Field Distance (Smallest)")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE LEAGUE = '"+National+"' AND CENTER_DISTANCE = (SELECT MIN(CENTER_DISTANCE) FROM STADIUM) ORDER BY TEAM_NAME");
        }
    }

    //AMERICAN & NATIONAL LEAGUE INFO
    if(ui->AmericanLeagueCheckBox->checkState() == Qt::Checked && ui->NationalLeagueCheckBox->checkState() == Qt::Checked)
    {
        if(SortBy == "Team Name")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM ORDER BY TEAM_NAME");
        }
        if(SortBy == "Stadium Name")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM ORDER BY STADIUM_NAME");
        }
        if(SortBy == "Park Typology")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM ORDER BY BALLPARK_TYPOLOGY");
        }
        if(SortBy == "Open Roof")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE ROOF_TYPE = '"+Open+"' ORDER BY TEAM_NAME");
        }
        if(SortBy == "Date Opened")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM ORDER BY DATE_OPENED");
        }
        if(SortBy == "Total Capacity")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM ORDER BY SEATING_CAP");
        }
        if(SortBy == "Center Field Distance (Greatest)")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE CENTER_DISTANCE = (SELECT MAX(CENTER_DISTANCE) FROM STADIUM) ORDER BY TEAM_NAME");
        }
        if(SortBy == "Center Field Distance (Smallest)")
        {
            qry.prepare("SELECT STADIUM_NAME, SEATING_CAP, LOCATION, SURFACE, TEAM_NAME, LEAGUE, DATE_OPENED, CENTER_DISTANCE, BALLPARK_TYPOLOGY, ROOF_TYPE"
                        " FROM STADIUM WHERE CENTER_DISTANCE = (SELECT MIN(CENTER_DISTANCE) FROM STADIUM) ORDER BY TEAM_NAME");
        }
    }


    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    ui->DistancesTable->setModel(model);

}

void MainWindow::on_PlanCustomTripButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_PrePlannedButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_backButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

    //----------------------------CUSTOM TOUR PAGE CODE-----------------------------------------//


void MainWindow::on_SelectCustomStadiumButton_clicked()
{
    ui->StartingPointBox->setModel(databaseObj.loadStartingTeam());
    ui->QueueTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    Delete_Trip_Data();                         // Deletes TourData table so it can be reused
    ui->QueueTableView->setModel(databaseObj.loadTourQueueData());  // clears TourTableView
    DeleteVisited_StadiumsTable();        // Will clear the VISITED_STADIUMS table
    selectedStadiumsVector.clear();             // clears the selected Stadium vector
    ui->DistanceNumber->display("0");           // Initially sets the DistanceNumber widget to be 0
}

void MainWindow::on_AddQueueButton_clicked()
{
    QString AddToQueue = ui->StartingPointBox->currentText();

    // If the vector already contains the Stadium, then it won't add
    // Otherwise, it adds
    if(selectedStadiumsVector.contains(AddToQueue)) {
        qDebug() << "Can't add duplicates!";
    }
    else {
        selectedStadiumsVector.append(AddToQueue);
    }

    QSqlQuery qry;
    qry.prepare("INSERT INTO TourData(Queue) VALUES('"+AddToQueue+"')");

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not add to Queue. . ." << endl;
    }
    else
        qDebug() << "Successful insertion into Database" << endl;

   // ui->QueueTableView->setModel(databaseObj.loadTourQueueData());

    // Because databaseObj.loadTourQueueData() displays in an incorrect form in QueueTableView, we set
    // the model to be based off the vector (in correct order)
    ui->QueueTableView->setModel(new QStringListModel(QList<QString>::fromVector(selectedStadiumsVector)));


//    qry.prepare("SELECT COUNT(Queue)  FROM TourData");                    *GETS COUNT OF Queue COLUMN*
}

void MainWindow::on_DeleteQueueButton_clicked()
{
    QString removingStadium = selectedStadiumsVector.last(); // returns the last item in the vector
    QSqlQuery qry;
//    qry.prepare("DELETE FROM TourData WHERE Queue = (SELECT MAX(Queue) FROM TourData);");            *CLEARS ENTIRE QUEUE*

//    qry.prepare("DELETE FROM TourData "
//                "WHERE Queue = (SELECT Queue"
//                "               FROM TourData"
//                "               ORDER BY Queue DESC"
//                "               LIMIT 1)");
    qry.prepare("Delete from TRIP_DATA where QUEUE = '"+removingStadium+"';");

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not delete Queue data. . ." << endl;

    }

    selectedStadiumsVector.pop_back(); // removes from the vector the last element that was added

    // Sets table view to be the vector contents
    ui->QueueTableView->setModel(new QStringListModel(QList<QString>::fromVector(selectedStadiumsVector)));
}

/*on_SortQueue_clicked() - Once clicked, it will sort the Queue Table View by
order of efficiency */
void MainWindow::on_SortQueue_clicked()
{
    // If the user clicks sort without selecting any Stadiums, then an error message will be displayed
    if(selectedStadiumsVector.isEmpty()) {
       QMessageBox::warning(this, "Warning", "Please select a Stadium!");
       return;
    }

    QSqlQuery qry;

    // Inserts into the VISITED_STADIUMS table the first Stadium
    QString startingStadium = selectedStadiumsVector.at(0);    // Gets first Stadium from table

    qry.prepare("INSERT into VISITED_STADIUMS(STADIUM_NAME) VALUES('"+ startingStadium + "');");
    if(!qry.exec()) {
         qDebug() <<"Error! Could not insert into VISITED_STADIUMS!. . ." << endl;
    }

    double totalDistance = 0;

    databaseObj.BeginTrip(startingStadium, selectedStadiumsVector, totalDistance);

    ui->QueueTableView->setModel(databaseObj.loadVISITED_STADIUMSTable());    // Displays newly sorted table
    ui->DistanceNumber->display(QString::number(totalDistance));    // Displays the totalDistance onto the DistanceNumber widget
}


void MainWindow::on_backButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/* Delete_Trip_Data() - Will clear everything from TRIP_DATA table
 */
void MainWindow::Delete_Trip_Data()
{
    QSqlQuery qry;
    qry.prepare("DELETE FROM TRIP_DATA;");
    if(!qry.exec()) {
        qDebug() << "Can't delete from TRIP_DATA";
    }
}

/* DeleteVisited_StadiumsTable() - Will clear everything from VISITED_STADIUMS Table
 */
void MainWindow::DeleteVisited_StadiumsTable()
{
    QSqlQuery qry;
    qry.prepare("DELETE FROM VISITED_STADIUMS;");
    if(!qry.exec()) {
        qDebug() << "Can't delete from VISITED_STADIUMS table!";
    }
}

    // DepartButton() - Will officially start the trip
void MainWindow::on_DepartButton_clicked()
{
    // selects Teams from VISITED_STADIUMS table
    QSqlQuery qry;
    qry.prepare("Select STADIUM_NAME from VISITED_STADIUMS;");

    if(!qry.exec()) {
        qDebug() << "Can't add sorted Stadiums to vector!";
    }

    // appends newly sorted Stadiums into the vector
    selectedStadiumsVector.clear();
    while(qry.next()) {
        selectedStadiumsVector.append(qry.value(0).toString());
    }

    // If user doesn't have any Stadiums, then an error message will appear
    if(selectedStadiumsVector.isEmpty()) {
       QMessageBox::warning(this, "Warning", "Please select a Stadium");
       return;
    }

    ui->stackedWidget->setCurrentWidget(ui->StadiumPage);            // changes page to StadiumPage

    // sets StadiumNameLabel to be first Stadiums's name
    QString firstStadium = selectedStadiumsVector.at(0);
    ui->StadiumNameLabel->setText(firstStadium);

    // sets stadiumDescription for text browser
    ui->StadiumDescriptionTextBrowser->setText(GetStadiumDescription(firstStadium));

    // PROCESSING - Sets picture path depending on firstStadium
    QString pixelPath = GetPicturePath(firstStadium);
    QPixmap pix(pixelPath);
    int w = ui->StadiumPicturesLabel->width();
    int h = ui->StadiumPicturesLabel->height();
    ui->StadiumPicturesLabel->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));

    // Sets the souvenir table view for the corresponding Stadium
    ui->souvenirTableView->setModel(databaseObj.LoadSouvenirsByStadium(firstStadium, false));

    this->currentPrice = 0; // sets current price of each Stadium equal to 0
    this->totalPrice = 0;   // sets total price equal to 0
    ui->priceLCDNumber->display("0");

}

    //----------------------------CAMPUS VISIT PAGE CODE-----------------------------------------//

void MainWindow::on_backButton_7_clicked()
{
    on_backButton_6_clicked();
}


// loads souvenirComboBox with souvenirs corresponding to the Stadium
void MainWindow::on_loadSouvenirButton_clicked()
{
    QString stadium = ui->StadiumNameLabel->text();
    ui->souvenirComboBox->setModel(databaseObj.LoadSouvenirsByStadium(stadium, true));

}

// enables one to purchase chosen souvenir at a given stadium
void MainWindow::on_purchaseSouvenirsButton_clicked()
{
    QString stadium = ui->StadiumNameLabel->text();
    QString souvenirItem = ui->souvenirComboBox->currentText();

    if(souvenirItem == "") {
       QMessageBox::warning(this, "Warning", "Please select an item");
    }
    else {
        this->currentPrice += databaseObj.GetSouvenirPrice(stadium, souvenirItem);
        this->totalPrice += databaseObj.GetSouvenirPrice(stadium, souvenirItem);
        qDebug() << currentPrice;
        qDebug() << totalPrice;
        ui->priceLCDNumber->display("$" + QString::number(currentPrice));

    }
}

// If user clicks delete while purchasing souvenirs, will modify currentPrice and totalPrice
void MainWindow::on_deleteSouvenirsButton_clicked()
{
    this->totalPrice -= currentPrice;
    currentPrice = 0;
    ui->priceLCDNumber->display("$" + QString::number(currentPrice));
}

// Will go to next stadium during the tour trip
void MainWindow::on_nextStadiumButton_clicked()
{
    // pops front element in vector, sets currentPrice equal to 0 (recalculate price for each stadium)
    selectedStadiumsVector.pop_front();
    currentPrice = 0;
    ui->priceLCDNumber->display(0);

    // if vector is empty, then tour is finished, will go back to front page
    if(selectedStadiumsVector.isEmpty()) {
        on_backButton_7_clicked();  // goes back to first page
        QMessageBox::information(this, "Information", "Thank you for touring with us. Your total is : $ " + QString::number(totalPrice));
        totalPrice = 0; // resets totalPrice back to 0

        // Deletes TRIP_DATA table and VISITED_STADIUMS table
        Delete_Trip_Data();
        DeleteVisited_StadiumsTable();
    }
    else {
        // Gets the nextStadium from vector
        QString nextStadium = selectedStadiumsVector.front();
        ui->StadiumNameLabel->setText(nextStadium);

        // sets StadiumDescription for text browser
        ui->StadiumDescriptionTextBrowser->setText(GetStadiumDescription(nextStadium));

        // PROCESSING - Sets picture path depending on Stadium
        QString pixelPath = GetPicturePath(nextStadium);
        QPixmap pix(pixelPath);
        int w = ui->StadiumPicturesLabel->width();
        int h = ui->StadiumPicturesLabel->height();
        ui->StadiumPicturesLabel->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));

        // Sets the souvenir table view for the next Stadium
        ui->souvenirTableView->setModel(databaseObj.LoadSouvenirsByStadium(nextStadium, false));
    }
}


    //-----------------------------PRE PLANNED TOUR PAGE CODE-----------------------------------------//

void MainWindow::on_backButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_LoadData_clicked()
{
    ui->StadiumSelectBox->setModel(databaseObj.loadStartingTeam());
    ui->PrePQueueTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    Delete_Trip_Data();                         // Deletes TourData table so it can be reused
    ui->QueueTableView->setModel(databaseObj.loadTourQueueData());  // clears TourTableView
    DeleteVisited_StadiumsTable();        // Will clear the VISITED_STADIUMS table
    selectedStadiumsVector.clear();             // clears the selected Stadiums vector
    ui->DistanceNumber->display("0");           // Initially sets the DistanceNumber widget to be 0
}


void MainWindow::on_SortAmount_clicked()
{
    // Inserts selected Combo Box item as first value to be stored in Vector
    QString AddToQueue = ui->StadiumSelectBox->currentText();

    // If the vector already contains the stadium, then it won't add
    // Otherwise, it adds
    if(selectedStadiumsVector.contains(AddToQueue)) {
        qDebug() << "Can't add duplicates!";
    }
    else {
        selectedStadiumsVector.append(AddToQueue);
    }

    //Inserts Value into Data Table in SQLite
    QSqlQuery qry;
    qry.prepare("INSERT INTO TourData(Queue) VALUES('"+AddToQueue+"')");

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not add to Queue. . ." << endl;
    }
    else
        qDebug() << "Successful insertion into Database (:" << endl;

    // Inserts into the VISITED_STADIUMS table the first stadium
    QString startingStadium = selectedStadiumsVector.at(0);    // Gets first stadium from table

    qry.prepare("INSERT into VISITED_STADIUMS(STADIUM_NAME) VALUES('"+ startingStadium + "');");

    if(!qry.exec()) {
         qDebug() <<"Error! Could not insert into VISITED_STADIUMS!. . ." << endl;
    }


    // Code that inserts desired amount of visits in order by random choice
    int amount = ui->DesiredAmtBox->currentText().toInt();
    qDebug() << amount;
    qDebug() << AddToQueue;

    for(int i = 1; i < amount; i++)
    {
        QString tempName;
//        qry.prepare("SELECT DISTINCT endingCollege FROM CollegeDistances WHERE endingCollege NOT IN (Select CollegeName from AlreadyVisitedColleges) ORDER BY RANDOM() LIMIT 1");
        qry.prepare("SELECT DISTINCT startingCollege FROM CollegeDistances WHERE startingCollege NOT IN (Select CollegeName from AlreadyVisitedColleges) "
                    "AND startingCollege NOT IN (SELECT Queue from TourData) ORDER BY RANDOM() LIMIT 1");

// NEEDS LOTS OF WORK !! **********************

        // Stores the randomly chosen college to the list
        if(!qry.exec())
        {
            qDebug() << "Can't execute sql statement!";
        }
        if(qry.next())
        {
            tempName = qry.value(0).toString();
        }

        qDebug() << tempName;

        if(selectedStadiumsVector.contains(tempName))
        {
            qDebug() << "Can't add duplicates ! ! ! !";
        }
        else
        {
            selectedStadiumsVector.append(tempName);
        }

        qry.prepare("INSERT INTO TourData(Queue) VALUES('"+tempName+"')");

        if(!qry.exec())
        {
            qDebug() <<"Error! Could not add to Queue. . :(" << endl;
        }
        else
            qDebug() << "Successful insertion into Database (;" << endl;


        // Inserts into the VISITED_STADIUMS table the first stadium
        QString startingStadium = selectedStadiumsVector.at(0);    // Gets first stadium from table

        qry.prepare("INSERT into VISITED_STADIUMS(STADIUM_NAME) VALUES('"+ startingStadium + "');");

        if(!qry.exec())
        {
             qDebug() <<"Error! Could not insert into VISITED_STADIUMS!. . ." << endl;
        }

    }


    // Because databaseObj.loadTourQueueData() displays in an incorrect form in QueueTableView, we set
    // the model to be based off the vector (in correct order)
    ui->PrePQueueTable->setModel(new QStringListModel(QList<QString>::fromVector(selectedStadiumsVector)));

    // If the user clicks sort without selecting any stadiums, then an error message will be displayed
    if(selectedStadiumsVector.isEmpty())
    {
       QMessageBox::warning(this, "Warning", "Please select a stadium!");
       return;
    }

    double totalDistance = 0;

    databaseObj.BeginTrip(startingStadium, selectedStadiumsVector, totalDistance);

    ui->PrePQueueTable->setModel(databaseObj.loadVISITED_STADIUMSTable());    // Displays newly sorted table
    ui->DistanceLCDctr->display(QString::number(totalDistance));    // Displays the totalDistance onto the DistanceNumber widget
}



void MainWindow::on_DeleteButton_clicked()
{
    QString removingStadium = selectedStadiumsVector.last(); // returns the last item in the vector
    QSqlQuery qry;

    qry.prepare("Delete from TourData where Queue = '"+removingStadium+"';");

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not delete Queue data. . ." << endl;

    }

    selectedStadiumsVector.pop_back(); // removes from the vector the last element that was added

    // Sets table view to be the vector contents
    ui->PrePQueueTable->setModel(new QStringListModel(QList<QString>::fromVector(selectedStadiumsVector)));
}

void MainWindow::on_DepartButton_12_clicked()
{
    // selects stadiums from VISITED_STADIUMS table
    QSqlQuery qry;
    qry.prepare("Select STADIUM_NAME from VISITED_STADIUMS;");

    if(!qry.exec()) {
        qDebug() << "Can't add sorted stadiums to vector!";
    }

    // appends newly sorted stadiums into the vector
    selectedStadiumsVector.clear();
    while(qry.next()) {
        selectedStadiumsVector.append(qry.value(0).toString());
    }

    // If user doesn't have any stadiums, then an error message will appear
    if(selectedStadiumsVector.isEmpty()) {
       QMessageBox::warning(this, "Warning", "Please select a stadium");
       return;
    }

    ui->stackedWidget->setCurrentWidget(ui->StadiumPage);            // changes page to StadiumPage

    // sets StadiumNameLabel to be first stadium's name
    QString firstStadium = selectedStadiumsVector.at(0);
    ui->StadiumNameLabel->setText(firstStadium);

    // sets StadiumDescription for text browser
    ui->StadiumDescriptionTextBrowser->setText(GetStadiumDescription(firstStadium));

    // PROCESSING - Sets picture path depending on firstStadium
    QString pixelPath = GetPicturePath(firstStadium);
    QPixmap pix(pixelPath);
    int w = ui->StadiumPicturesLabel->width();
    int h = ui->StadiumPicturesLabel->height();
    ui->StadiumPicturesLabel->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));

    // Sets the souvenir table view for the corresponding Stadium
    ui->souvenirTableView->setModel(databaseObj.LoadSouvenirsByStadium(firstStadium, false));

    this->currentPrice = 0; // sets current price of each Stadium equal to 0
    this->totalPrice = 0;   // sets total price equal to 0
    ui->priceLCDNumber->display("0");
}




