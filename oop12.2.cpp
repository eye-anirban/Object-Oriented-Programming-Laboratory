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

      friend ostream &operator<<( ostream &output, const Distance &D ) {
         output<< D.feet<< "f " << D.inches  << "i ";
         return output;
      }

      friend istream &operator>>( istream  &input, Distance &D ) {
         input >> D.feet >> D.inches;
         return input;
      }
      Distance operator++()
      {
          ++feet;
          ++inches;
      }
      Distance operator++(int)
      {
          feet++;
          inches++;
      }

};

int main() {
   Distance  D1;

   cout << "Enter the value of object : " << endl;
   cin >> D1;

   cout << "Given Distance : " << D1 << endl;
   ++D1;
    cout << "pre : " << D1 << endl;
   D1++;
    cout << "post : " << D1 << endl;



    return 0;
}