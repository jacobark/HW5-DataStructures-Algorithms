//ECGR 3180 - Homework 5A
//Jacob Barker
//jbarke33@uncc.edu

#include <iostream>
using namespace std;

#include "tree-a.h"

int main() {
	Tree T;
	Node* root = NULL;
	std::string x;

	cin >> x;
	while(x != "EOF") { //Takes input and inserts into tree, Lexicographically, unitll sentinal
		root = T.insert(root, x);
		cin >> x;
	}

	std::string y;
	cin >> y;
	while(!cin.eof()) { //takes input and searches tree for input
		bool Find = T.search(root, y);
		if(Find == 1) { //if input is tree
			cout << '"' << y << '"' << " found" << endl;
		       } 
		else { //if input is not in tree
			cout << '"' << y << '"' << " not found" << endl;
		}
		cin >> y;
	}

	return 0;
}
