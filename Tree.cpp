///
// Author: Cami Lacy
//
// Assignment: P6 Tree Data Structure
//
// Description: This file contains the function definitions
// to the Tree Class. We can call the insert and operator << 
// overloaded function in main to insert values and display
// the tree data to the screen. The private recursive print function 
// is used within the operator overloaded function to display
// the data sorted. 
///


#include "Tree.h"

// Checks if able to insert 
bool Tree::insert(int newVal)
{
	
	// Local variables
	Node* temp = new Node(newVal);
	Node* it = root; 
	bool insertCheck = false;

	// Increment
	++count;

	// to screen
	cout << "INSERTING: " << newVal << endl;

	// if empty
	if (this->root == nullptr)
	{
		// Set the root to temp
		this->root = temp;

		// Set true
		insertCheck = true;

		// Output if empty tree
		cout << "insert in empty tree" << endl;
		
	}

	//if only one node 
	else if (this->root->left == nullptr || this->root->right == nullptr)
	{
		// if value is already there
		if (this->root->data == temp->data)
		{
			// Decrement count
			--count;
			// Don't do anything else
			
		}
		
		// if temp greater
		else if (this->root->data < temp->data)
		{
			// right points to temp
			this->root->right = temp; 

			//Set to true
			insertCheck = true;

			// checks right side
			cout << "checking right\n";
		}

		// if temp lesser
		else if (this->root->data > temp->data)
		{
			// left points to temp
			this->root->left = temp;

			// Set to true
			insertCheck = true;

			// checks left side
			cout << "checking left\n";
		}

	}

	// if many nodes
	else
	{

		// Set iterator to root again
		it = root;

		// While true loop
		while (true)
		{

			// if value is already there
			if (it->data == temp->data)
			{
				// Decrement count
				--count;
				// Don't do anything else
				break;
			}

			// if temp greater
			else if (it->data < temp->data)
			{


				// if no more nodes to check
				if (it->right == nullptr)
				{
					// insert the number
					it->right = temp;

					// Set to true
					insertCheck = true;

					// checks right side
					cout << "checking right\n";
					break;
				}
			
				// move it
				it = it->right;

				// Continue check right side
				cout << "checking right\n";

			}

			// if temp lesser
			else if (it->data > temp->data)
			{


				// if no more nodes to check
				if (it->left == nullptr)
				{
					// insert the number
					it->left = temp;

					// Set to true
					insertCheck = true;

					// Checks left side
					cout << "checking left\n";
					break;
				}

				// move it
				it = it->left;

				// Continue checking left
				cout << "checking left\n";

			}
		} // end while loop
		
	} // end else
	
	// if true
	if (insertCheck > 0)
	{
		// successful insert
		cout << "inserted TRUE\n";
	}
	else
	{
		// no insert
		cout << "inserted FALSE\n";
	}
	
	return insertCheck;
}

// operator overloader
ostream& operator<<(ostream& str, const Tree& tree)
{
	// calls recursive print
	tree.print(str, tree.root);
	
	// Output count
	std::cout << "Count: " << tree.count;

	// return ostream
	return str;
}


// Recursively prints
void Tree::print(ostream& ostr, Node* curNode) const
{

	// check if node nullptr
	if (curNode == nullptr)
	{
		// Don't do anything
		return;
	}
	else
	{

		// Checks node left
		print(ostr, curNode->left);

		// output us
		cout << curNode->data << " ";

		// Checks node right
		print(ostr, curNode->right); 
		

	}

}

