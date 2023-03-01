//ECGR 3180 - Homwork 5A
//Jacob Barker
//jbarke33@uncc.edu

#ifndef tree_h
#define tree_h
#include <iostream>
using namespace std;


class Node { //Node Class
	public:
		std::string data;
		Node* left;
		Node* right;
		Node (std::string d) {
			data = d;
			left = NULL;
			right = NULL;
		}
};

class Tree { //Tree Class
	public:
		Node *root;
		Tree() {root = nullptr;}
		Node* insert(Node* root, std::string data); //insert function
		bool search(Node* root, std::string label); //Insert search
};
#endif
