#include <iostream>
#include<math.h>
using namespace std;

class Complex {
   private:
      int r;
      int i;

   public:
       Complex()
       {
           r=0;
           i=0;
       }
      Complex(int a, int b) {
         r=a;
         i=b;
      }
      friend ostream &operator<<( ostream &output, const Complex &D ) {
         output<< D.r<< "+" << D.i<<"i" ;
         return output;
      }

      friend istream &operator>>( istream  &input, Complex &D ) {
         input >> D.r >> D.i;
         return input;
      }
     void operator++()
    {
    	float mod;
    	mod=sqrt(pow(r,2)+pow(i,2));
    	cout<<mod;
	}

};

int main() 
{
   Complex  D1;

   cout << "Enter the real and imaginary part of 1st complex number : " << endl;
   cin >> D1;
   cout << "First Complex : " << D1 << endl;

  cout << "\nThe modulus of Complex Number is ";
   ++D1;
    return 0;
}