#include "block.cpp"
#include <stdlib.h>

void newBlockValue(Block &blocks[4][4]) {
	Block b = blocks[rand() % 4][rand()%4];

}
int main() {
	Block blocks[4][4];
	// do this twice:
	// find random array coordinates
	// if zero
	// randomly assign 2 or 4

	newBlockValue(blocks);

};



// & = address of
// * = value of
