// Question 1

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <cctype>

using namespace std;

void convert(string& word) { 
	int letters = word.length(); 

	for (int i = 0; i < letters; i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			word[i] = toupper(word[i]); 
		}
		else if (word[i] >= 'A' && word[i] <= 'Z') {
			word[i] = tolower(word[i]);
		}
	}
}

int main() {
	string word; 
	int yesNo(0);

	cout << "Enter a word. " << endl;
	getline(cin, word);

	convert(word); 

	cout <<"The converted word is: " << word << endl; 
			
	system("pause");

	return 0;
}

