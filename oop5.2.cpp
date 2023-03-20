#include<iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
 
int main(){
    char *x=new char[100], *inputString= new char[100], outputArray[100];
    int readIndex = 0, writeIndex;
    cout<<"Enter a string:";
    cin.getline(x,100,'0');
    
    for(int i=0;i<strlen(x);i++)
    inputString[i]=x[i];
    
    delete[] x;
    
    while(inputString[readIndex] == ' '){
        readIndex++;
    }
 
    for(writeIndex = 0;inputString[readIndex] != '\0'; readIndex++){
      if(inputString[readIndex]==' ' && inputString[readIndex-1]==' '){
          continue;
      }
      outputArray[writeIndex] = inputString[readIndex];
      writeIndex++;
    }
    outputArray[writeIndex] = '\0';
    cout<<"String without extra spaces\n"<< outputArray;
 
    return 0;
}

