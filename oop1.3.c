/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct emp
{
  int id;
  char name[50];
  int age;
  int basic_sal;
  float gross;
};

void display(struct emp *s,int n)
{int i;
printf("Details Entered :\n ");
for( i=0;i<n;i++)
{
 printf("Employee number: %d, ID : %d , Name : %s ,Age : %d , Basic Sal : %d , Gross Sal : %0.1f \n", i+1, s->id, s->name,
s->age, s->basic_sal ,s->gross);
s++;
}
}

int main()
{
int n,i;
printf( "Enter number of employees : \n");
scanf("%d", &n);
struct emp a[n];
for( i=0;i<n;i++)
{
printf("Enter ID, age, basic sal, name of Employee %d : \n", i+1);
scanf("%d", &a[i].id);
scanf("%d", &a[i].age);
scanf("%d", &a[i].basic_sal);
scanf("%s", &a[i].name);
a[i].gross = a[i].basic_sal+0.8*a[i].basic_sal+0.1*a[i].basic_sal;
}
struct emp *s = a;
display(s,n);
return 0;
}
