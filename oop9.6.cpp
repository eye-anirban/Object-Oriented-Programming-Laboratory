#include <iostream>
#include <string>
#include <sstream>
class Complex 
{

private:
double x, y;
public: 
Complex ()
  {
    x = 0;
    y = 0;
  } 
Complex (double x, double y)
  {
    this->x = x;
    this->y = y;
  } 
Complex operator + (Complex const &object)
  {
    
Complex re;
    
re.x = x + object.x;
    
re.y = y + object.y;
    
return re;
  
}
  
Complex operator - (Complex const &object)	//use of constant objects
  {
    Complex re;
    
re.x = x - object.x;
    
re.y = y - object.y;
    
return re;
  
}
  
std::string print ()		//demonstrating constant member function and constant arguments
  {
    
std::string result = "";
    
std::ostringstream x_sstream;
    
x_sstream << x;
    
std::string x_str = x_sstream.str ();
    
std::ostringstream y_sstream;
    
y_sstream << y;
    
std::string y_str = y_sstream.str ();
    
if (y < 0)
      
result = y_str + y_str + "i";
    
    else
      
result = x_str + "+" + x_str + "i";
    
return result;
  
}

};


int main () 
{
  
Complex number1 (3.5, 5.1), 
number2 (-4.4, -3.8);
  
 
Complex number3 = number1 - number2;
  
std::cout << number3.print ();
  
 
return 0;

}
