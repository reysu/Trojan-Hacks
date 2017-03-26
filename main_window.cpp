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


	content = new QLabel("hello world");
	content->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    content->setMinimumHeight(350);
	contentLayout->addWidget(content,2,0,1,1);
	overallLayout->addLayout(contentLayout,2,0,4,4);

//	currentClass = new QComboBox(this);

	overallLayout->addLayout(headerLayout,0,0,1,4);
	setLayout(overallLayout);
}
MainWindow::~MainWindow(){}

MainWindow::displayGradesPage(){


	
}