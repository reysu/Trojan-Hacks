/* Include QT Items */
	#include <QWidget>
	#include <QVBoxLayout>
	#include <QLabel>
	#include <QLineEdit>
	#include <QTextEdit>
	#include <QPushButton>
	#include <QListWidget>
	#include <QImage>
	#include <QRadioButton>
	#include <QComboBox>
	#include <QFileDialog>
	#include <fstream>
	#include <iostream>
	#include <cstring>
	#include <sstream>
	#include <QListWidgetItem>
	#include <QCalendarWidget>
	#include <QApplication>
	#include <QStackedWidget>
	#include "redebotdatabase.h"
	#include <QScrollArea>
	#include <QStackedWidget>

class MainWindow : public QWidget
{
	Q_OBJECT
public:
	
	MainWindow(RedebotDatabase* data);
	~MainWindow();


private slots:
	void displayGradesPage();
	void displayHomePage();
	void displayOfficeHoursPage();
	
private:
/*Overall Layout*/
	RedebotDatabase* ds;
	QGridLayout* overallLayout;

/*Header Layout*/
	QGridLayout* headerLayout;
	QLabel* welcomeLabel;
	QFont titleFont;
	QPushButton* viewOfficeHoursButton;
	QPushButton* viewGradesButton;
	QFont captionFont;
	QLabel* currentUser;

/* Content Layout*/
	QGridLayout* contentLayout;
	
/*pages*/
	QStackedWidget *stackedWidget;
	QWidget *welcomePageWidget;
	QWidget *gradesPageWidget;
	QWidget *officeHoursPageWidget;
/*welcome page*/
	QGridLayout* welcomePageLayout;
	QLabel* content;

/*grades page*/
	QGridLayout* gradesPageLayout;
	QLabel* gradesLabel;
/*office hours page*/
	QVBoxLayout* officeHoursPageLayout;
	QLabel* officeHoursLabel;
};

