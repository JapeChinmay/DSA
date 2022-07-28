#include<iostream>
using namespace std;


class StackusingArray {

    int *data;
    int nextIndex;
    int capacity;


   public :

       stackuisngArray(int totalSize) {

            data = new int[totalSize];
            nextIndex = 0;
            capacity = totalSize;
       }


       int size() {

            return nextIndex;

       }

       bool isEmpty() {

            if(nextIndex == 0) return true;
            else return false;

       }

       int push(int ele) {

           if(nextIndex != capacity) {
              data[nextIndex]  = ele;
              nextIndex ++;

           }
       }


       int pop() {

            if(nextIndex ==0){
                return 0;

            } else {
                nextIndex--;
                return data[nextIndex];
            }


       }


       int top() {

          if(nextIndex ==0) return 0;
          else {

            return data[nextIndex-1];

       }
       }
};

int main() {


    StackusingArray  s1(10);

    s1.push(1);
    s1.push(13);
    s1.push(10443);
    s1.push(134);
    s1.push(11);
    s1.push(11);


    cout << s1.pop() << endl;


}


