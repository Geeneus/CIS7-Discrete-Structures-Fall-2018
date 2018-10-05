#include <string>
#include <chrono>
#include <iostream>
using namespace std;

long long getGCD(long long a, long long b) {
	long long r = a % b;
	return (r == 0) ? b : getGCD(b, r);
}

long long parseInput() {
	string s;
	while (true) {
		getline(cin, s);
		try { 
			long long v = stoll(s); 
			if (v > 0) return v;
		}
		catch (...) { }
		cout << "Invalid input! Enter a positive integer: ";
	}
}

int main() {
	bool rerun = true;
	while (rerun) {
		cout << "Use this program to find the GCD of A and B." << "\n" << "Enter A: ";
		long long a = parseInput();
		cout << "Enter B: ";
		long long b = parseInput();
		auto startTime = chrono::high_resolution_clock::now();
		long long gcd = getGCD(a, b);
		auto endTime = chrono::high_resolution_clock::now();
		cout << "The GCD of " << a << " and " << b << " is " << gcd << "\n";
		cout << "It took " << chrono::duration_cast<chrono::nanoseconds>(endTime - startTime).count() << "ns to calculate." << "\n";
		cout << "Would you like to continue? Y/N: ";
		while (rerun) {
			string sinput;
			getline(cin, sinput);
			if (toupper(sinput[0]) == 'Y') {
				cout << "-- -- -- -- -- -- -- -- -- -- -- --" << "\n";
				break;
			}
			else if (toupper(sinput[0]) == 'N') rerun = false;
			else cout << "Invalid input! Enter Y or N: ";
		}
	}
}
