#include<iostream>
using namespace std;


class Fraction {


private:
   int numerator;
   int denominator;




public:


    void simplify()

    {

        int gcd = 1;
        int j = min(this-> numerator , this->denominator);
        for(int i=1;i<=j;i++)
        {

            if(this->numerator & i == 0 && this->denominator % i == 0){
                gcd-i;

            }

        }

        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;



    }

    Fraction add(Fraction const &f2)

    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);



        Fraction fNew(num, lcm);


        fNew.simplify();

        return fNew;


    }


    Fraction operator+(Fraction const &f2)
    {

                int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);



        Fraction fNew(num, lcm);

        fNew.simplify();

        return fNew;

    }

   void multiply(Fraction const &f2) {

       this->numerator  = numerator * f2.numerator;
       this-> denominator = denominator * f2.denominator;

   }


    Fraction operator*(Fraction const &f2) {

       this->numerator  = numerator * f2.numerator;
       this-> denominator = denominator * f2.denominator;

       Fraction fNew(num, lcm);
       fNew.simplify();
       return fNew;


   }

   void display()
    {
        cout << this -> numerator << "/" << this -> denominator << endl;

   }
};


int main()

{

    Fraction f1(12, 4);
    Fraction f2(23, 12);

    Fraction f3 = f1.add(f2);


    f1.display();
    f2.display();
    f3.display();


    Fraction f4 = f1*f2;




}
