#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {

	cout << countVowel("hello world!");


}

int countVowel(string str) {

	int vowelCounter = 0;
	for (int i = 0; i < str.length(); i++) {
		string currentLetter = str.substr(i, 1);
		if (currentLetter == "a" || currentLetter == "e" || currentLetter == "i" || currentLetter == "o" || currentLetter == "u" || currentLetter == "A" || currentLetter == "E" || currentLetter == "I" || currentLetter == "O" || currentLetter == "U")
			vowelCounter++;
	}
	return vowelCounter;
}