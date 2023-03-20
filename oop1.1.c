/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
struct student
{ char name[50];
  int roll, marks[5];
};

int main()
{ int i;
  struct student S1;
 printf ("Enter Name :-\n");
 fgets(S1.name, sizeof(S1.name), stdin);
 
 printf("Enter roll number\n");
 scanf("%d", &S1.roll);
 
 printf("Enter marks for 5 subjects\n\n");
for(i=0;i<5;i++)
 scanf("%d", &S1.marks[i]);
 
 printf ("\nDetails Entered :- \nName :  %s\nRoll Number : %d\n", S1.name, S1.roll);
for(i=0;i<5;i++)
 printf("Marks are %d \n", S1.marks[i]);



    return 0;
}
