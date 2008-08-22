#ifndef FLASHCARDABOUT_H
#define FLASHCARDABOUT_H

#include "ui_about.h"

/*
	flashcardabout.h - by Sean Brewer

	The about window.

	This program is licensed under the GPL version 3 see
	the included GPL3.txt or see:
	http://www.gnu.org/licenses/gpl-3.0.txt

*/

class cartulinaabout : public QDialog
{
	Q_OBJECT

	public:
	        cartulinaabout(QDialog *parent = 0);

	private:
		Ui::cartulinaabout ui;
};

#endif

