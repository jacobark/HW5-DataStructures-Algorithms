//ECGR 3180 - Homework 5B
//Jacob Barker
//jbarke33@uncc.edu

#include "tree-b.h"

Node* Tree::insert(Node* root, std::string data) { //Inserts Node into tree
	 if(root == NULL) {
		 return new Node(data);
	 }
	 else {
		 Node* cur;
		 if(data <= root->data) { //if data is less than current go left
			 cur = insert(root->left, data);
			 root->left = cur;
		 }
		 else {
			 cur = insert(root->right, data); //if data greater than current go right
			 root->right = cur;
		 }
		 return root;
	 }
 }
bool Tree::search(Node* root, std::string label) { //searches tree for Node with specific label
	if(root == NULL || root->data == label)
		return root;

	if(root->data < label) //if root is less than key go right
		return search(root->right, label); 
	//go left
	return search(root->left, label);
}

void Tree::inorder(Node* root) { //In-Order traversal as described in class
	if(root == NULL) {
		return;
	}

	inorder(root->left); //goes all the way left through the tree
	cout << root->data << endl; //outputs current node
	inorder(root->right); //goes right through the tree

}

void Tree::preorder(Node* root) { //Pre-Order traversal
	if(root==NULL)
		return;

	cout << root->data << endl; //outputs current node
	preorder(root->left); //goes left though the tree
	preorder(root->right); //goes right through the tree
}

void Tree::postorder(Node* root) { //Post-Order Traversal
	if(root==NULL) 
		return;

	postorder(root->left); //Goes left through the tree
	postorder(root->right); //goes right through the tree
	cout << root->data << endl; //outputs current node
}
