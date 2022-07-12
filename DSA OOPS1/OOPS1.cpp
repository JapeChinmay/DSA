#include <iostream>

using namespace std;


class Student{

public :
 int rollNumber;
 int age;


 void display()
 {

     cout << age << " " <<rollNumber << endl;

 }

};

int main()
{
    Student s1;
    //Creates memory  directly having garbage value.
    // parameters are age, rollNumber.

    // assigning the value to the obj properties here

    s1.age = 12;
    s1.rollNumber = 34;


    Student s2;

    s2.age = 345;
    s2.rollNumber = 67;

    Student s3;
    s3.age = 56;
    s3.rollNumber =5678;


    Student s5;
    s5.display();






    //calling display function

    s1.display();
    s2.display();
    s3.display();



    //creating dynamically creating  obj


    Student *s4  =  new Student;
    // here obj "S4"includes the address of memory allocated.
    // not the direct memory  value

    s4-> age = 23;
    s4-> rollNumber = 90;

    s4 -> display();


    Student *s10 = new Student;

    s10 -> display();






}
