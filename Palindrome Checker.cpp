/* Task 5: C++ program for Palindrome Checker */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
  char str1[100];
  int i,l,flag=0;

  cout<<"\nEnter your string: ";
  cin.getline(str1,100);//taking input string from use
  l=strlen(str1);
  for(i=0;i<l;i++){
    if(str1[i]!=str1[l-i-1]){
      flag=1;
      break;
    }
  }
  if(flag==1)
    cout<<"\nGiven string is not a palindrome";
    else
    cout<<"\nGiven string is a palindrome";
  
  }
   