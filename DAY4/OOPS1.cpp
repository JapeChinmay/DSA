#include<iostream>
using namespace std;


class Student {

/* making it public allows you to
access outside the scope.
*/
   public :

       int age;
       int rollno;

};



int main()

{


    //static creation of objects
    Student s1;
    Student s2;

    s1.age = 12;
    s1.rollno = 13;
    s2.age = 45;
    s2.rollno = 456;

 // printing
    cout << s1.age << s1.rollno << " " << s2.age << s2.rollno <<endl;




    //dynamic creation of  object
    Student *s3 = new Student;
    Student *s4 = new Student;
  // for dynamic allocation you can write
  // here you need to de-refer the pointer

   (*s3).age = 14;
   (*s3).rollno =123;
   (*s4).age = 41;
   (*s4).rollno =35;

   // or using arrows

s3-> age = 12;
s4->roll = 456;







}
