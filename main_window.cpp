#include "main_window.h"

MainWindow::MainWindow(RedebotDatabase* data){
	setWindowTitle("Redebot: CS Major Assistant");
	overallLayout = new QVBoxLayout();
	welcomeLabel = new QLabel("Welcome");
	overallLayout->addWidget(welcomeLabel);





	setLayout(overallLayout);
}

MainWindow::~MainWindow(){}