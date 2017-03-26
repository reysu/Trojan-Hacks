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
    headerLayout->addWidget(currentUser,2,0,1,4);

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
	
	contentLayout->addWidget(stackedWidget);

	welcomePageLayout = new QGridLayout();

	welcomePageWidget->setLayout(welcomePageLayout);
		content = new QLabel("hello world, welcome to Redebot, \n USC's first CS Major Assistant");
		content->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
	    content->setMinimumHeight(350);
	 //   content->setMaximumWidth(100);
	welcomePageLayout->addWidget(content,2,0,1,1);

	
	//overallLayout->addWidget(stackedWidget,2,0,4,4);
	
	gradesPageLayout = new QGridLayout();
	gradesPageWidget->setLayout(gradesPageLayout);
	gradesLabel = new QLabel("hey");
	//	gradesLabel->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
	 //   gradesLabel->setMinimumHeight(350);
    gradesPageLayout->addWidget(gradesLabel,0,0,1,1);



    officeHoursPageLayout = new QVBoxLayout();
    officeHoursPageWidget->setLayout(officeHoursPageLayout);
    	officeHoursLabel = new QLabel("See all office hours");
    	officeHoursLabel->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    officeHoursPageLayout->addWidget(officeHoursLabel);


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