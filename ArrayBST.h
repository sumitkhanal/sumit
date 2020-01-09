#include "BinaryTree.h"

#define MAX_SIZE 12

class ArrayBST: public BinarySearchTree{
	//private:
	
	public:
		int element[MAX_SIZE];
		ArrayBST();
		~ArrayBST();
		void preorderTraversal();
		void add(int data);
		bool search(int data);
};
