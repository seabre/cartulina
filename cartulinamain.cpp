#include <QtGui>
#include "cartulinamain.h"
#include "cartulinaabout.h"
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;
/*
	cartulinamain.cpp - by Sean Brewer

	This deck contains all of the callbacks from the main window
	in the program and handles all of the main functions.


	This program is licensed under the GPL version 3, see
	the included GPL3.txt for details or see:
	http://www.gnu.org/licenses/gpl-3.0.txt
*/

cartulinamain::cartulinamain(QMainWindow *parent)
    : QMainWindow(parent)
    {
		index = 0;
		ui.setupUi(this);
    }
 
 //the on_leftpush_clicked and on_rightpush_clicked methods
 //cycle through the deck..
    void cartulinamain::on_leftpush_clicked() 
   {
	if (deck.size() > 0){
	if (index <= 0 ){
		index = deck.size() - 1;
	}
	else {
		--index;
	}
	
	QString word,definition,status;
	card acard =  deck.at(index);

	word = QString::fromStdString(acard.word);
	definition = QString::fromStdString(acard.definition);
        status = QString::number(index + 1) + " of " + QString::number(deck.size());
	ui.wordlabel->setText(word); 
	ui.definitionlabel->setText(definition);
    	ui.statuslabel -> setText(status);
	
    }
    else
	    openDeck();
    }



 void cartulinamain::on_rightpush_clicked()
    {

    
    if (deck.size() > 0){
    
    if (index >= (deck.size() - 1))
		index = 0;
	else
		++index;
	
		
	QString word,definition,status;
	card acard =  deck.at(index);

	word = QString::fromStdString(acard.word);
	definition = QString::fromStdString(acard.definition);
        status = QString::number(index + 1) + " of " + QString::number(deck.size());
	ui.wordlabel->setText(word); 
	ui.definitionlabel->setText(definition);
    	ui.statuslabel -> setText(status);
    }
    else
	    openDeck();
    }

 void cartulinamain::on_actionabout_triggered()
    {
	    cartulinaabout aboutwin;
	            aboutwin.exec();
    }

 void cartulinamain::on_actionhelp_triggered()
    {
	     QMessageBox::information(this, tr("Not yet availible"),
	                               tr("Help for flashCard is not yet availible. See http://seabre986.googlepages.com for details."),
				                                 QMessageBox::Close);
    }


 void cartulinamain::on_actionopen_triggered()
    {
	
	openDeck();
		
    }


void cartulinamain::openDeck(){
	
	
	QFileDialog::Options options;
	QString selectedFilter;
	QString fileName = QFileDialog::getOpenFileName(this,
					                tr("Open Deck"),
							QString::fromStdString(""),
							tr("All Files (*);;flashCard decks (*.crd)"),
							&selectedFilter,
							options);
	if (!fileName.isEmpty()){
		QByteArray ba = fileName.toLatin1();
		char *f = ba.data();
		deckParser prs(f);
		vector <card> newdeck = prs.getDeck();
		//is there an even number of words and definitions and
		//has entries?
		if (((newdeck.size() * 2) % 2) == 0 and newdeck.size() != 0){
			deck = newdeck;
			index = 0;
			ui.wordlabel->setText(QString::fromStdString(deck.at(0).word)); 
			ui.definitionlabel->setText(QString::fromStdString(deck.at(0).definition));
			QString status = "1 of ";
			status = status + QString::number(deck.size()); 
    			ui.statuslabel -> setText(status);
		}
		else
			//Currently not a great way to check for
			//"good" decks...but it works (kind of) for now..
			QMessageBox::information(this, tr("Error"),
                 	"There was a problem parsing the syntax of your deck. Please inspect it.");
		}
	
	}

void cartulinamain::on_actionhideword_toggled(bool validity){
	if (validity == true)
		ui.wordlabel -> hide();
	else
		ui.wordlabel -> setVisible(true);
	
	
	}

void cartulinamain::on_actionhidedefinition_toggled(bool validity){
	if (validity == true)
		ui.definitionlabel -> hide();	
	else
		ui.definitionlabel -> setVisible(true);
	}

void cartulinamain::on_actionchangewordfont_triggered(){
	bool ok;
    	QFont font = QFontDialog::getFont(&ok, QString::fromStdString("Change Word Font"), this);
	if (ok)
		ui.wordlabel-> setFont(font);
				    	
	
	}

void cartulinamain::on_actionchangedefinitionfont_triggered(){
	bool ok;
    	QFont font = QFontDialog::getFont(&ok, QString::fromStdString("Change Definition Font"), this);
	if (ok)
		ui.definitionlabel-> setFont(font);
	
	}


void cartulinamain::on_actionshuffledeck_triggered(){
	
	if (deck.size() > 0){
	//Standard fisher-yates shuffle algorithm
	srand (time(NULL));
	int n = deck.size();
	while (n > 1){
		int k = rand() % n;
		n--;
		card temp = deck[n];
		deck[n] = deck[k];
		deck[k] = temp;	
		
		}
	//Take user back to the beginning of the deck..
	index = 0;
	ui.wordlabel->setText(QString::fromStdString(deck.at(0).word)); 
	ui.definitionlabel->setText(QString::fromStdString(deck.at(0).definition));
	QString status = "1 of ";
	status = status + QString::number(deck.size()); 
    	ui.statuslabel -> setText(status);
	}
	else {}
	}
