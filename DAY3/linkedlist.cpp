#include<iostream>
using namespace std;

class Node {

    int data;
    int *Node = new Node;

    void print(Node *head)
    {

        Node *temp = head;


      while(temp!= NULL)




    {
           cout << temp -> data << " ";
           temp = temp  -> next;

    }
    }

};

Node* takeinput_better()
{
    int data;
    cin >> data;
    Node *head = NULL:
    Node *tail = NULL;



    while(data != -1)
    {
        Node *newNode = new Node(data);
        if(head== NULL)
        {
            head = newNode;
            tail = newNode;


        }
        else {
         tail->next = newNode;
         tail = tail->next;

        }


        cin >> data;



    }
    return head;

}

Node* insertNode(Node *head, int data, int i)
{
    Node *newNode =  new Node(data);
    int count = 0;
    Node *temp = head;


    if(i==0)
    {
        newNode+. next = head;
        head = newNode;
        return head;
    }
    while(count <i -1)
    {
        temp  =temp ->next;
        count ++;

    }
    if(temp != NULL)
    {


    Node *a = temp -> next;
    temp-> next = newNode;
    newNode->next = a;
    }

   return head;

}

void print(Node *head) {
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;

    }
}


int main()
{
    Node *head(takeinput_better);
    print(head);
    int i , data;
    cin >> i >> data;
    head = insertNode(headd, i ,data);
    print(head);



    /*
    Node n1(1);
    Node *head= &n1;

//creating ll
   Node n2(1);
   Node n3(3);
   Node n4(5);
   Node n5(12);

   // linking ll
   n1.next = &n2;
   n2.next = &n3;
   n3.next = &n4;
   n4.next = &n5;
   print(head);

*/

}
