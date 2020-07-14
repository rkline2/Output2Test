
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
	/*
	vector <string> myOutput = {"The", "Theban", "Thee", "Their", "Then", "There", "There's", "Therefore",
		"These", "They", "They'll", "the", "thee", "theft", "their", "them", "themselves", "then", "thence", 
		"there", "there's", "there--and", "thereat", "therefore", "thereto", "therewithal", "these", "they", "they'll"};
	*/

	/*
	for (int i = 0; i < myOutput.size() - 1; i++) {
		if (myOutput.at(i) > myOutput.at(i + 1)) {
			cout << myOutput.at(i) << " is not less than " << myOutput.at(i + 1) << endl;
		}
	}
	*/

	vector <string> sourceOutput = {"The", "Their", "Thee", "Theban", "They", "There's", "There", "Then", "Therefore",
		"These", "They'll", "them", "the", "their", "thee", "theft", "there", "then", "themselves", "thence", "these",
		"there's", "therefore", "there--and", "thereat", "thereto", "therewithal", "they", "they'll"};

	
	for (int i = 0; i < sourceOutput.size() - 1; i++) {
		if (sourceOutput.at(i) > sourceOutput.at(i + 1)) {
			cout << "'" << sourceOutput.at(i) << "'" << " is not less than " << "'" << sourceOutput.at(i + 1) << "'" << endl;;
		}
	}
	


	return 0;
}
