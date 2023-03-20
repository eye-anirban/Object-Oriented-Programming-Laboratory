/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Distance {
   private:
      int feet;
      int inches;

   public:

      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      friend ostream &operator<<( ostream &output, const Distance &D ) {
         output<< D.feet<< "f " << D.inches  << "i ";
         return output;
      }

      friend istream &operator>>( istream  &input, Distance &D ) {
         input >> D.feet >> D.inches;
         return input;
      }

    Distance operator -(Distance d){
        Distance temp;
        temp.feet = feet-d.feet;
        temp.inches = inches-d.inches;
        return temp;
    }

    Distance operator +(Distance d){
        Distance temp;
        temp.feet = feet+d.feet;
        temp.inches = inches+d.inches;
        return temp;
    }
};

int main() 
{
   Distance  D1,D2,D3,D4;

   cout << "Enter the value of object : " << endl;
   cin >> D1;
   cout << "Enter the value of object : " << endl;
   cin >> D2;
   cout << "First Distance : " << D1 << endl;
   cout << "Second Distance :" << D2 << endl;

    D3 = D1 + D2;
    D4= D1 - D2;
    cout<<"Add ="<<D3<<endl;
    cout<<"subtact="<<D4<<endl;
    return 0;
}
