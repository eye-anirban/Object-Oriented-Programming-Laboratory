/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


using namespace std;


class Employee{
    protected:
        string name;
        int id;
        double salary;
    public:
    
};


class Regular: public Employee{
    private:
        double DA;
        double HRA;
        double basic_salary;
    public:
     Regular(double d, double h, double b){
         DA=d;
         HRA=h;
         basic_salary=b;
     }
     void display(){
            cout<<"\nSalary of the Regular employee is "<<(DA+HRA+basic_salary);
        }
    
};


class PartTime: public Employee
{
    private:
        int number_of_hours;
        double pay_per_hour;
    public:
        PartTime(int n, double p)
        {
            number_of_hours=n;
            pay_per_hour=p;
        }
        void display(){
            cout<<"\nSalary of the part-time employee is "<<(number_of_hours*pay_per_hour);
        }
};


int main()
{   
    int da, hra , basic;
    cout<<"\nInsert the DA , HRA and Basic Sal for regular employee: ";
    cin>>da>>hra>>basic;
    Regular r(da,hra,basic);
    r.display();
    int hours, pay;
    cout<<"\nInsert the no.of hours and Pay per hour for part time employee: ";
    cin>>hours>>pay;
    PartTime p(hours,pay);
    p.display();

    return 0;
}
