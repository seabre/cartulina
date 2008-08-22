#ifndef FLASHCARDMAIN_H
#define FLASHCARDMAIN_H

//! [0]
#include "ui_cartulinamain.h"
#include "deckparser.h"
#include <vector>
#include <string>
//! [0]

/*
	cartulinamain.h - by Sean Brewer

	This deck contains all of the callbacks from the main window
	in the program and handles all of the main functions.


	This program is licensed under the GPL version 3, see
	the included GPL3.txt for details or see:
	http://www.gnu.org/licenses/gpl-3.0.txt
*/

//! [1]
class cartulinamain : public QMainWindow
{
	Q_OBJECT

	public:
	        cartulinamain(QMainWindow *parent = 0);

	private slots:
		void on_leftpush_clicked();
		void on_rightpush_clicked();
		void on_actionhelp_triggered();
		void on_actionabout_triggered();	
		void on_actionopen_triggered();
		void on_actionchangewordfont_triggered();
		void on_actionchangedefinitionfont_triggered();
		void on_actionshuffledeck_triggered();
		void on_actionhideword_toggled(bool);
		void on_actionhidedefinition_toggled(bool);
	private:
		Ui::cartulinamain ui;
		int index;
		int indexloc;
		vector <card> deck;
		void openDeck();
};

#endif

