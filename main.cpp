#include <iostream>
#include <QApplication>
#include "main_window.h"

using namespace std;

int main(int argc, char* argv[]){
	 RedebotDatabase* db = new RedebotDatabase;
	 QApplication app(argc, argv);


	 MainWindow mainWindow(db);
     mainWindow.show();

    return app.exec();
}