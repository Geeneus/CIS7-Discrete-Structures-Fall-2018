#include <vector>
#include <string>
#include <iostream>
using namespace std;

class HanoiTowers {
	public:
		int steps = 0;
		int totalDisks;

		class Tower {
			public:
				string name;
				vector<int> disks;

				Tower(string initName) {
					name = initName;
				}
		};

		Tower tower1 = string("Tower 1"); 
		Tower tower2 = string("Tower 2");
		Tower tower3 = string("Tower 3");

		// Initialize using total disks
		HanoiTowers(int totalDiskInit) {
			totalDisks = totalDiskInit;
			for (int i = 0; i < totalDisks; i++) { tower1.disks.push_back(totalDisks - i); }
		}

		void printTower(Tower &thisTower) {
			cout << thisTower.name << ": ";
			for (int i = 0; i < totalDisks; i++) { cout << (i < thisTower.disks.size() ? to_string(thisTower.disks[i]) : "-") << " "; }
			cout << "\n";
		}

		void printAllTowers() {
			printTower(tower1);
			printTower(tower2);
			printTower(tower3);
			cout << "\n";
		}

		void moveDisks(int thisDisk, Tower &start, Tower &goal, Tower &extra) {
			steps++;
			if (thisDisk == 1) {
				// Move final disk to goal
				cout << "Move disk " << start.disks.back() << " from " << start.name << " to " << goal.name << "\n";
				goal.disks.push_back(start.disks.back());
				start.disks.pop_back();
				printAllTowers();
			}
			else {
				// Move all but bottom to extra
				moveDisks(thisDisk - 1, start, extra, goal);
				// After moved to extra, move bottom to goal
				cout << "Move disk " << start.disks.back() << " from " << start.name << " to " << goal.name << "\n";
				goal.disks.push_back(start.disks.back());
				start.disks.pop_back();
				printAllTowers();
				// Move the stack from extra onto bottom
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
		try { 
			int i = stoi(s);
			if (i >= 0) return stoi(s); 
		}
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
