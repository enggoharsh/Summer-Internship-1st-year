/* Task 1: C++ program for string reversal */
  #include <iostream>
#include <string.h>
int main(){
  using namespace std;
  char str[100];
  int len,i,temp;
  cout<<"\nEnter the string: ";
  //taking input string from user
  cin.getline(str,100);
int  l=strlen(str);
for(i=0;i<l/2;i++){
  temp=str[i];
  str[i]=str[l-1-i];
  str[l-1-i]=temp;
  }
  cout<<"\nThe reverse string is:"<<str;


  
    return 0;
}