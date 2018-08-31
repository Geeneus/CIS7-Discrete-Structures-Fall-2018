#include <regex>
#include <string>
#include <iostream>
using namespace std;

int main() {

	// Regular expression for finding statements.
	// Statements are a letter or a letter with a not (!, ~, ¬).
	regex statement(string("^") + "[!~¬]?" + "[A-UW-Za-uw-z]");
	
	// Regular expression for finding connectors.
	regex connector(string("^") + "(\\^|v|V|->|<=>)");
	cout << "Welcome to Aaron Jimenez's WFF evaluator." << "\n" << "Enter 0 any time to exit. Do not use V as a variable; it stands for OR only." << "\n" << "-- -- -- -- --" << "\n";

	while (true) {
		string userInput;
		cout << "Enter a WFF: ";
		getline(cin, userInput);
		if (userInput == "0") break;

		// Remove whitespaces and parenthesis.
		userInput = regex_replace(userInput, regex("[\\s\\(\\)]"), "");

		int statementNext = true;
		bool validWFF = userInput != "";

		while (validWFF) {
			// Decides whether to look for a statement or a connector next, depending on statementNext. Flips every successful match.
			regex thisRegex = statementNext ? statement : connector;

			// If there is a match, remove it and continue
			if (regex_search(userInput, thisRegex)) {
				statementNext = !statementNext;
				userInput = regex_replace(userInput, thisRegex, "");
			}
			// If the string is empty, everything was valid and removed. Valid WFF.
			else if (userInput == "") {
				break;
			}
			// Match failed and string is not empty. Not valid WFF.
			else {
				validWFF = false;
			}
		}

		cout << (validWFF ? "This is a valid WFF. Good job." : "That is not a valid WFF!") << "\n\n";	
	}
}