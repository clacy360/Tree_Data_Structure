///
// Author: Cami Lacy
//
// Assignment: P6 Tree Data Structure
//
// Description: This header file contains the Node 
// class definitions and and Tree class function 
// declarations. They allow us to create nodes and
// trees as well as inserting values and tracking the count. 
///

#ifndef TREE_H
#define TREE_H
#include<iostream>
using namespace std;



class Tree
{
public:

	class Node
	{
	public:
		Node() :left(nullptr), right(nullptr), data(0) {}				// creates empty node
		Node(int val) :left(nullptr), right(nullptr), data(val) {}		// creates filled node
		int data;
		Node* left, * right;
	};


	Tree() :count(0), root(nullptr) {}
	bool insert(int newVal);
	friend ostream& operator << (ostream& str, const Tree& tree); // calls print and outputs count


private:
	void print(ostream& ostr, Node* curNode) const; // recursive function
	Node* root;
	int count;
};
#endif