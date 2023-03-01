//ECGR 3180 - Homework 5B
//Jacob Barker
//jbarke33@uncc.edu

#include <iostream>
using namespace std;

#include "tree-b.h"

int main() {
	Tree T;
	Node* root = NULL;
	std::string x;

	cin >> x;
	while(x != "EOF") { //takes input string and inserts into tree, Lexicographically
		root = T.insert(root, x);
		cin >> x;
	}

	cout << endl;
	cout << "In-Order" << endl << "--------" << endl;
	T.inorder(root); //Calls In-Order Traversal
	cout << endl;

	cout << "Pre-Order" << endl << "--------" << endl;
	T.preorder(root); //Calls Pre-Order Traversal
	cout << endl;

	cout << "Post-Order" << endl << "--------" << endl;
	T.postorder(root); //Calls Post-Order Traversal
	return 0;
}
