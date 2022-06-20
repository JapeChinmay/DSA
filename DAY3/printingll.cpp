#include<iostream>
using namespace std;


class Node {

  public :
      int data;
      Node *next;


      Node(int data)
      {
          this->data;
          this->next = NULL;

      }

      void print(Node *head)
      {
          Node *temp = head;

          while(temp != NULL)
          {
              cout << temp->data << " ";
              temp = temp->next;

          }
      }


};

int main()
{

    Node n1(12);
    Node n2(124);

    Node *head  = &n1;
    n1.next = &n2;
    print(head);



}
