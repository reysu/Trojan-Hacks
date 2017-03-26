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
	#include <QTableView>
	#include <QTableWidget>

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
	void logoutlogin();
	void loginWindowDisplay();
	void quitloginDisplay();
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
	QPushButton* logoutButton;
	QPushButton* homeButton;

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
	QLabel* gradesLabel;
	QGridLayout* gradesPageLayout;
	QHBoxLayout* labelLayout;
	QListWidget* gradesListWidget;
	QListWidget* classesListWidget;
	QFont boldFont;
/*office hours page*/
	QVBoxLayout* officeHoursPageLayout;
	QLabel* officeHoursLabel;
	QTableWidget* officeHoursTable;
/*loginWindow*/
	QWidget *loginWindow;
	QVBoxLayout* loginLayout;
	QHBoxLayout* subLayoutr1;
	QHBoxLayout* subLayoutr2;
	QLabel* inputUsernameLabel;
	QLabel* inputPasswordLabel;
	QPushButton* signinButton;
	QLineEdit* usernameInput;
	QLineEdit* passwordInput;


	

};

