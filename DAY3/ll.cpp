#include<iostream>

using namespace std;


class Node {
   public :
       int data;
       Node *next;

       //creating node using constructor
       Node(int data)
       {
           this.data->data;
           next ->NULL:

       }
};


int main()

{
    // statically creating nodes
  Node n1(12);
  Node n2(34);

  //linking head and node n1

  Node *head = &n1;
  n1.next = &n2;

  // linking node n1 and n2

  cout << n1.data << n2.data << " ";

  //dynamiccally creating nodes


  Node *n3 = new Node(12);
  Node *n4 = new Node(45);








}
