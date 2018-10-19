#include <vector>
#include <string>
#include <iostream>
using namespace std;

class HanoiTowers {
	public:
		int steps = 0;
		int totalDisks;
		vector<int> tower1;
		vector<int> tower2;
		vector<int> tower3;

		// Initialize using total disks
		HanoiTowers(int totalDiskInit) {
			totalDisks = totalDiskInit;
			for (int i = 0; i < totalDisks; i++) { tower1.push_back(totalDisks - i); }
		}

		void printTower(vector<int> &thisTower) {
			for (int i = 0; i < totalDisks; i++) { cout << (i < thisTower.size() ? to_string(thisTower[i]) : "-") << " "; }
			cout << "\n";
		}

		void printAllTowers() {
			printTower(tower1);
			printTower(tower2);
			printTower(tower3);
			cout << "\n";
		}

		void moveDisks(int thisDisk, vector<int> &start, vector<int> &goal, vector<int> &extra) {
			steps++;
			if (thisDisk == 1) {
				// Move final disk to goal 
				goal.push_back(start.back());
				start.pop_back();
				printAllTowers();
			} else {
				// Move all but bottom disk to extra
				moveDisks(thisDisk - 1, start, extra, goal);
				// After disks are moved to extra, move bottom to goal
				goal.push_back(start.back());
				start.pop_back();
				printAllTowers();
				// Move the stack on extra onto the new bottom
				moveDisks(thisDisk - 1, extra, goal, start);
			}
		}

		void solve() {
			cout << "\n";
			printAllTowers();
			moveDisks(totalDisks, tower1, tower3, tower2);
			cout << "Solved in " << steps << " steps." << "\n\n";
		}
};

int getIntInput() {
	string s;
	while (true) {
		getline(cin, s);
		try { return stoi(s); }
		catch (...) {}
		cout << "Invalid input! Enter a positive integer: ";
	}
}

int main() {
	cout << "Towers of Hanoi solver by Aaron Jimenez." << "\n";
	cout << "Enter \"0\" at any time to exit." << "\n";
	cout << "-- -- -- -- -- -- -- -- -- -- -- --" << "\n";

	while (true) {
		cout << "Enter number of disks: ";
		const int totalDisks = getIntInput();
		if (totalDisks == 0) break;
		HanoiTowers towers = totalDisks;
		towers.solve();
	}
}
