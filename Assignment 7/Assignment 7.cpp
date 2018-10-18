#include <vector>
#include <iostream>
using namespace std;

class HanoiTowers {
	public:
		int totalDisks;
		vector<int> tower1;
		vector<int> tower2;
		vector<int> tower3;

		HanoiTowers(int totalDiskInit) {
			totalDisks = totalDiskInit;
			tower1.resize(totalDisks);
			tower2.resize(totalDisks);
			tower3.resize(totalDisks);

			for (int i = 0; i < totalDisks; i++) {
				tower1[i] = i + 1;
			}
		}

		void printDisks() {
			for (int i = 0; i < totalDisks; i++) {
				cout << "Space " << i << " of tower 1: " << tower1[i] << " ";
			} cout << "\n";

			for (int i = 0; i < totalDisks; i++) {
				cout << "Space " << i << " of tower 2: " << tower2[i] << " ";
			} cout << "\n";

			for (int i = 0; i < totalDisks; i++) {
				cout << "Space " << i << " of tower 3: " << tower3[i] << " ";
			} cout << "\n";

			cout << "-- -- -- -- -- -- -- -- -- -- -- --" << "\n";
		}

		void moveDisks(int thisDisk, vector<int> &start, vector<int> &goal, vector<int> &extra) {
			if (thisDisk == 0) {
				// Move final disk to goal 
				start[thisDisk] = 0;
				goal[thisDisk] = thisDisk + 1;
				printDisks();
			} else {
				// Move all but bottom disk to extra
				moveDisks(thisDisk - 1, start, extra, goal);

				// After all disks are moved to extra, move bottom to goal
				start[thisDisk] = 0;
				goal[thisDisk] = thisDisk + 1;
				printDisks();

				// Move the extra stack onto the new bottom
				moveDisks(thisDisk - 1, extra, goal, start);
			}
		}

		void solve() {
			printDisks();
			moveDisks(totalDisks, tower1, tower3, tower2);
		}
};

int main() {
	const int totalDisks = 3;
	HanoiTowers towers = 3;
	towers.solve();
	system("pause");
}

