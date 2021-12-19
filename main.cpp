///
// Author: Cami Lacy
//
// Assignment: P6 Tree Data Structure
//
// Description: This program creates an empty tree data structure,
// and it inserts numbers into it. The user does not input any data.
// The output data is sent to the screen. It contains the 'debug' 
// regarding if you're inserting into an empty tree, checking 
// left or right, and if the number was inserted. The values inserted
// will also be sorted in ascending order and output to the screen. 
// The count of the number of values will also be output to the screen.
///


#include<iostream>
#include "Tree.h"
using namespace std;

int main()
{

	// Create empty tree
	Tree newTree;


	// Insert all of the numbers
	newTree.insert(6);
	newTree.insert(9);
	newTree.insert(3);
	newTree.insert(5);
	newTree.insert(5);
	newTree.insert(7);
	newTree.insert(2);
	newTree.insert(10);
	newTree.insert(4);
	newTree.insert(1);
	newTree.insert(8);

	// Display the sorted values and count
	cout << newTree;


	cout << endl << endl;
	system("pause");
	return 0;
}

/*
****PROGRAM OUTPUT****

INSERTING: 6
insert in empty tree
inserted TRUE
INSERTING: 9
checking right
inserted TRUE
INSERTING: 3
checking left
inserted TRUE
INSERTING: 5
checking left
checking right
inserted TRUE
INSERTING: 5
checking left
checking right
inserted FALSE
INSERTING: 7
checking right
checking left
inserted TRUE
INSERTING: 2
checking left
checking left
inserted TRUE
INSERTING: 10
checking right
checking right
inserted TRUE
INSERTING: 4
checking left
checking right
checking left
inserted TRUE
INSERTING: 1
checking left
checking left
checking left
inserted TRUE
INSERTING: 8
checking right
checking left
checking right
inserted TRUE
1 2 3 4 5 6 7 8 9 10 Count: 10

Press any key to continue . . .


*/