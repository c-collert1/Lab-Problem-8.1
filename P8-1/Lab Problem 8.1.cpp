#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main() {

	cout << countCharacter("hello world!");

}

int countCharacter(string str) {

	return str.length();
}