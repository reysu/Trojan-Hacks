#include "main_window.h"

MainWindow::MainWindow(RedebotDatabase* data){
	setWindowTitle("Redebot: CS Major Assistant");
	overallLayout = new QGridLayout();
	/*Header layout */
	headerLayout = new QGridLayout();
	welcomeLabel = new QLabel("Welcome to Redebot");
	headerLayout->addWidget(welcomeLabel,0,0,1,4);
	titleFont.setBold(true);
    titleFont.setPointSize(25);
	welcomeLabel->setFont(titleFont);
	viewOfficeHoursButton = new QPushButton("View Office Hours");
	headerLayout->addWidget(viewOfficeHoursButton,1,0,1,2);
	viewGradesButton = new QPushButton("View Grades");
	headerLayout->addWidget(viewGradesButton,1,2,1,2);

    captionFont.setPointSize(10);
    currentUser = new QLabel("<i>You are currently logged in as Eric Su</i>"); // WRITE FUNCTION THAT will detect whether or not user is logged in, and who is logged in
    headerLayout->addWidget(currentUser,2,0,1,3);
    logoutButton = new QPushButton("logout");
    headerLayout->addWidget(logoutButton,2,3,1,1);

	QFrame* myFrame = new QFrame();
	myFrame->setFrameShape(QFrame::HLine);
	const int NUMBER_OF_COLUMNS_IN_GRID = 4;
	overallLayout->addWidget(myFrame, 1, 0, 1, NUMBER_OF_COLUMNS_IN_GRID);
	contentLayout = new QGridLayout();

	//initialling stacked pages so that content changes but not the header
	welcomePageWidget = new QWidget;
    gradesPageWidget = new QWidget;
    officeHoursPageWidget = new QWidget;
	stackedWidget = new QStackedWidget;
	stackedWidget->addWidget(welcomePageWidget);
    stackedWidget->addWidget(gradesPageWidget);
    stackedWidget->addWidget(officeHoursPageWidget);
	
	QScrollArea *scroll = new QScrollArea;
	scroll->setWidget(stackedWidget);
	scroll->setWidgetResizable(true);
	scroll->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
	scroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	scroll->setMaximumWidth(300);
	scroll->setMinimumHeight(370);

	contentLayout->addWidget(scroll);
	//contentLayout->addWidget(stackedWidget);

	welcomePageLayout = new QGridLayout();

	welcomePageWidget->setLayout(welcomePageLayout);
	content = new QLabel("<h1><b>hello world</b></h1> <p> welcome to Redebot, <p> USC's first CS Major Assistant");
	content->setAlignment(Qt::AlignCenter);
	welcomePageLayout->addWidget(content,0,0,1,1);
	gradesPageLayout = new QGridLayout(gradesPageWidget);
	
	gradesLabel = new QLabel("CS104: <h1>A</h1> at 98.3 %%");
    gradesPageLayout->addWidget(gradesLabel,0,0,7,7);



    officeHoursPageLayout = new QVBoxLayout();
    officeHoursPageWidget->setLayout(officeHoursPageLayout);
    	officeHoursLabel = new QLabel("See all office hours");
    	officeHoursLabel->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    officeHoursPageLayout->addWidget(officeHoursLabel);

    connect(logoutButton,SIGNAL(clicked()),this,SLOT(logoutlogin()));
    connect(viewGradesButton, SIGNAL(clicked()),this, SLOT(displayGradesPage()));
    connect(viewOfficeHoursButton, SIGNAL(clicked()),this, SLOT(displayOfficeHoursPage()));



    overallLayout->addLayout(contentLayout,2,0,4,4);
	overallLayout->addLayout(headerLayout,0,0,1,4);
	setLayout(overallLayout);
}
MainWindow::~MainWindow(){}

void MainWindow::displayGradesPage(){
    stackedWidget->setCurrentIndex(1); 
}

void MainWindow::displayHomePage(){
    stackedWidget->setCurrentIndex(0); 
      
}
void MainWindow::displayOfficeHoursPage(){
	stackedWidget->setCurrentIndex(2);
}
void MainWindow::logoutlogin(){
	if(logoutButton->text() == "logout"){
		logoutButton->setText("login");
		currentUser->setText("<i>You are currently not signed in</i>");
	}else if(logoutButton->text() == "login"){
		loginWindowDisplay();
	// 	logoutButton->setText("logout");
	// 	currentUser->setText("<i>You are currently not signed in</i>");
	// 
	}	
}
void MainWindow::loginWindowDisplay(){

	loginWindow = new QWidget();
	loginLayout = new QVBoxLayout();
	subLayoutr1 = new QHBoxLayout();
	subLayoutr1 = new QHBoxLayout();
	inputUsernameLabel = new QLabel("username");
	inputPasswordLabel = new QLabel("password");
	usernameInput = new QLineEdit(""); 
	signinButton = new QPushButton("sign in");
	passwordInput = new QLineEdit();
	subLayoutr1->addWidget(inputUsernameLabel);
	subLayoutr1->addWidget(usernameInput);
	subLayoutr2->addWidget(inputPasswordLabel);
	subLayoutr2->addWidget(passwordInput);

	loginLayout->addLayout(subLayoutr1);
	loginLayout->addLayout(subLayoutr2);
	loginLayout->addWidget(signinButton);

	loginWindow->setLayout(loginLayout);
	loginWindow->setWindowModality(Qt::ApplicationModal);
	loginWindow->show();

	connect(signinButton, SIGNAL(clicked()), this, SLOT(hide()));

}