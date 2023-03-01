//ECGR 3180 - Homework 5A
//Jacob Barker
//jbarke33@uncc.edu

#include "tree-a.h"

Node* Tree::insert(Node* root, std::string data) { //inserts given Node into tree
	 if(root == NULL) {
		 return new Node(data);
	 }
	 else {
		 Node* cur;
		 if(data <= root->data) { //If data is less than root
			 cur = insert(root->left, data); //insert data left of root
			 root->left = cur;
		 }
		 else { //if data is greater than root
			 cur = insert(root->right, data); //insert data right of root
			 root->right = cur;
		 }
		 return root;
	 }
 }
bool Tree::search(Node* root, std::string label) { //searches tree for Node with specific data
	if(root == NULL || root->data == label)
		return root;

	if(root->data < label) //if data is  greater than root
		return search(root->right, label); //go right through tree

	return search(root->left, label); //if data is less than root go left through tree
}
