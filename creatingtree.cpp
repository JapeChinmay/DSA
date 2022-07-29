#include <algorithm>
#include <iostream>
#include <vector>

template <typename T >

using namespace std;


class treeNode {
	public:
	T data;
	vector <treeNode*>children;
	
	treeNode(T data) {
		this->data = data;
		
	}
	
}

int main() {
	
	treeNode<int>*root = new treeNode<int>(10);
	treeNode<int>*n1= new treeNode<int>(1011);
	treeNode<int>*n2 = new treeNode<int>(11);
	root->children.push_back(n1);
	root->children.push_back(n2);
	
	
	
	


	
	
	
  return 0;
  
}