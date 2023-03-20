/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct student 
{
  int roll;
  char name[40];
  int marks[5];
  int total_m;
  int per;

};
int all_std(struct student* std,int n);
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 

int roll(int roll_temp,struct student* std,int n){
    for(int i = 0;i<n;i++){
        if(roll_temp== std[i].roll){
            printf("Name: %s\n",std[i].name);
            
            for(int j=0;j<5;j++){
            printf("Marks in Subject %d : %d\n",i+1,std[i].marks[j]);
        }
        }
    }
}
int all_std(struct student std[],int n){
    //std[0].total_m=0;
    for(int i = 0;i<n;i++){
        std[i].total_m=0;
        for(int j = 0;j<5;j++){
            std[i].total_m+=std[i].marks[j];
        }
    }
    
    for(int i=0;i<n;i++){
        // std[i].per=0;
        std[i].per=std[i].total_m/5;
    }
    
    for(int i=0;i<n;i++){
            
            printf("\nName : %s \nRoll No. : %d\nTotal Marks: %d\nPercentage : %d %% \n",std[i].name,std[i].roll,std[i].total_m,std[i].per);
            ///printf("%","\n")
            printf("----------------------------------------------");
        }
    printf("\n");
    
}

int range(int l,int r,struct student* std,int n){
    for(int i = 0;i<n;i++){
        if(std[i].per>=l && std[i].per<=r){
            printf("Name: %s\n",std[i].name);
            printf("Percentage: %d %% \n",std[i].per);
            
            for(int j=0;j<5;j++){
            printf("Marks in Subject %d : %d\n",i+1,std[i].marks[j]);
            
            }
            printf("----------------------------------------------\n");
        }
    }
}

int sort_m(struct student* std,int n){
    int i, j;
    for (i = 0; i < n-1; i++)    
 
    for (j = 0; j < n-i-1; j++)
        if (std[j].total_m > std[j+1].total_m)
            swap(&std[j].total_m, &std[j+1].total_m);
    
    for(int i=0;i<n;i++){
            
            printf("\nName : %s \nRoll No. : %d\nTotal Marks: %d\n",std[i].name,std[i].roll,std[i].total_m);
            printf("----------------------------------------------");
        }
}
int func(){
    
}

int main()
{

    int n;
    printf("Enter no. of Students: \n");
    scanf("%d",&n);
    struct student st[n];
    for(int i=0;i<n;i++){
        printf("Enter roll number: \n");
        scanf("%d",&st[i].roll);
        printf("Enter name of student: \n");
        scanf("%s",st[i].name);
        printf("Enter marks of the student in 5 subjects: \n");
        for(int j=0;j<5;j++){
            scanf("%d",&st[i].marks[j]);
        }
    }
    

    int flag=0;
    while(flag==0){
        printf("1. Total Marks & Percentage of all students");
        printf("\n2. Display details for given roll no.");
        printf("\n3. Display details for marks in range ");
        printf("\n4. Sort for marks");
        printf("\n5. End");
        printf("\nChoose your option:");
        int c;
        scanf("%d",&c);
        if(c==1){
            all_std(st,n);
        }
        else if(c==2){
            int roll_temp;
            scanf("%d",&roll_temp);
            roll(roll_temp,st,n);
        }
        else if(c==3){
            int l,r;
            scanf("%d",&l);
            scanf("%d",&r);
            range(l,r,st,n);
        }
        else if(c==4){
            sort_m(st,n);
        }
        else{
            flag=1;
        }
    }

    return 0;
}
