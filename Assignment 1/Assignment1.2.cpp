#include <regex>
#include <string>
#include <iostream>
using namespace std;

regex connector(string("^") + "(\\^|v|V|->|<=>)");
regex parenthesisStart(string("^") + "[!~¬]{0,}" + "\\(");
regex statement(string("^") + "[!~¬]{0,}" + "[A-UW-Za-uw-z]");

bool isValidWFF (string s) {
	if (s == "") return false;
	int statementNext = false;

	while (true) {
		statementNext = !statementNext;
		regex thisRegex = statementNext ? statement : connector;
		if (statementNext && regex_search(s, parenthesisStart)) {
			int start = s.find('(') + 1, end = start, pCount = 1;
			for (end; end < s.size(); end++) {
				if (s[end] == '(') pCount++;
				else if (s[end] == ')') pCount--;
				if (pCount == 0) break;
			}

			if (pCount != 0) return false;
			if (!isValidWFF(s.substr(start, end - start))) return false;
			s = s.erase(0, end + 1);	
		}
		else if (regex_search(s, thisRegex)) s = regex_replace(s, thisRegex, "");
		else if (s == "") return true;
		else return false;
	}
}

int main() {
	cout << "Welcome to Aaron Jimenez's WFF evaluator." << "\n" 
		 << "Enter 0 any time to exit. Do not use V as a variable; it stands for OR only." << "\n" 
		 << "-- -- -- -- --" << "\n";
	
	while (true) {
		string userInput;
		cout << "Enter a WFF: ";
		getline(cin, userInput);
		if (userInput == "0") break;
		userInput = regex_replace(userInput, regex("\\s"), "");
		cout << (isValidWFF(userInput) ? "This is a valid WFF. Good job." : "That is not a valid WFF!") << "\n\n";
	}
}

/*

Comprehensive and flexible WFF evaluator

- Get WFF input from user
- Alternate between finding statements and connectors using regex, removing each successful find

- If it is time to search for a statement:
	* First check for valid opening parenthesis (remember unary operators)
	* If there are opening parenthesis, scan the string until the parenthesis balance
	* After that, evaluate everything inside the parenthesis as a separate WFF (isValidWFF is recursive)
	* If there are no parenthesis, then simply check for an A-Z variable, remembering possible unary operators

- If it is time to search for a connector (binary operator) simply check if next characters match any binary operators
- Return false for anything that doesn't follow guidelines

*/