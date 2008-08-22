#include <QApplication>
#include "cartulinamain.h"
/*

	main.cpp - by Sean Brewer

	Fairly self explanatory....this runs the program!!

	This program is licensed under the GPL version 3. See
	the included GPL3.txt or see:
	http://www.gnu.org/licenses/gpl-3.0.txt


*/

int main(int argc, char *argv[])
{	    
	QApplication app(argc, argv);
	cartulinamain mainwin;
	mainwin.show();
	return app.exec();
}

