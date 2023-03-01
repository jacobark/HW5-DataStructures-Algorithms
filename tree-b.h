//ECGR 3180 - Homework 5B
//Jacob Barker
//jbarke33@uncc.edu

#ifndef tree_h
#define tree_h
#include <iostream>
using namespace std;


class Node { //Node Class
	public:
		std::string data; //string label
		Node* left;	
		Node* right;
		Node (std::string d) {
			data = d;
			left = NULL;
			right = NULL;
		}
};

class Tree { //Tree class
	public:
		Node *root;
		Tree() {root = nullptr;}
		Node* insert(Node* root, std::string data); //tree insert
		bool search(Node* root, std::string label); //tree search
		void inorder(Node* root);	//In-Order Traversal
		void preorder(Node* root);	//Pre-Order Traversal
		void postorder(Node* root);	//Post-Order Traversal

};
#endif
