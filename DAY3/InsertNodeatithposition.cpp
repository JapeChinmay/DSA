#include<iostream>
using namespace std;



class Node {

  int data;
  Node *next;


  Node* takeinput()

  {
      int data;
      cin >> data;
      Node *head = NULL;
      Node*tail = NULL:

      while(data != -1)
      {
          Node *newnode = new Node(data);
          if(head == NULL)
          {
              head = newnode;
              tail = newnode;

          }
          else
          {
              tail->next = newnode;

              tail = tail->next;

          }
          cin >>data;

      }
  }

  Node *insertnode(Node *head, int i, int data)
  {

      Node *newNode = new Node(data);
      int count   = 0;
      Node *temp = head;

      if(i == 0){
        newNode->next = head;
        head = newNode;

      }

      while(temp !=NULL && count < i-1)
      {
          temp = temp->next;
          count++;

      }
      if(temp != NULL)
      {


      Node *a = temp->next;
      temp->next = newNode;
      newNode->next = a;


  }

  return head;

};
int main()

{

}
