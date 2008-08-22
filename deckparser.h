#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

/*

	deckparser.h - by Sean Brewer

	This provides the class and data structure that "simulates"
	a deck of cards (i.e. has a front and back, or in this case word/definition)

	This program is licensed under the GPL version 3. See 
	the included GPL3.txt for details or see:
	http://www.gnu.org/licenses/gpl-3.0.txt

*/

using namespace std;

class card {
	public:
		string word;
		string definition;
	};

class deckParser{
	private:
		vector <card> parseddeck;
	public:
		deckParser(char*);
		vector <card> getDeck();
		//vector <string> shuffle();
};

