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

class MainWindow : public QWidget
{
	Q_OBJECT
public:
	
	MainWindow(RedebotDatabase* data);
	~MainWindow();
	void displayGradesPage();

private slots:
	
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
	QLabel* content;
/*pages*/
	QStackedWidget *stackedWidget;
	QWidget* gradesPage;

};

