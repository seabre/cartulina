#include <fstream>
#include <iostream>
#include "deckparser.h"

/*

	deckparser.cpp - by Sean Brewer

	This provides the class and data structure that "simulates"
	a deck of cards (i.e. has a front and back, or in this case word/definition)

	This program is licensed under the GPL version 3. See 
	the included GPL3.txt for details or see:
	http://www.gnu.org/licenses/gpl-3.0.txt

*/

using namespace std;

vector <card> deckParser::getDeck(){

        return parseddeck;

        }

deckParser::deckParser (char* fileloc){
        string word;
        string definition;
	card anewcard;
        char tok = ' ';
        vector <card> deck;
        int bracket = 0;
        ifstream deckfile (fileloc);

        if (deckfile.is_open()){
                while (!deckfile.eof()){
                        tok = deckfile.get();
                        if (tok == '\n')
                                continue;

                        if (tok == '[' || tok == ']'){
                                ++bracket;
                                continue;
                                }

                        if (bracket == 2 && !word.empty() && definition.empty()){
                                anewcard.word = word;
                                word.clear();
                                bracket = 0;

                        }

                        if (bracket == 1 && word.empty() && !definition.empty()){
                                anewcard.definition = definition;
				deck.push_back(anewcard);
                                definition.clear();

                        }

                        if (bracket == 1 && definition.empty())
			  word += tok;
			else
			  definition += tok;

		 
		}
	    
		deckfile.close();
		definition.erase(definition.size() - 1);
		anewcard.definition = definition;
		deck.push_back(anewcard);
		definition.clear();
	}

	parseddeck = deck;

}
