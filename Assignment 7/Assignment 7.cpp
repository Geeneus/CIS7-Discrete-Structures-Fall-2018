#include <iostream>
using namespace std;

int totalDisks = 5;

void moveDisks(int thisDisk, int start, int goal, int extra) {
	if (thisDisk == 0) {
		// Move final disk to goal 
		cout << "Moving disk " << thisDisk << " from " << start << " to goal.";
	} else {
		// Move all but bottom disk to extra
		moveDisks(thisDisk - 1, start, extra, goal);
		// After all disks are moved to extra, move bottom to goal
		cout << "Moving disk " << thisDisk << " from " << start << " to goal.";
		// Move the extra stack onto the new bottom
		moveDisks(thisDisk - 1, extra, goal, start);
	}
}

int main() {
	moveDisks(3, 1, 3, 2);
}

