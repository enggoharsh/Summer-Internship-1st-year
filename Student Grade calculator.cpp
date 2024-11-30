/* Task 6:C++ Program to calculate average grade of students*/
#include <iostream>
using namespace std;

int main()
{
  int i;
 double n,sum,avg,marks;
 sum=0;
 cout<<"\nEnter the number of subjects: ";
 cin>>n;
 cout<<"\nEnter the marks obtained:\n";
 ///for loop to take input of marks of all subjects 
 for(i=1;i<=n;i++){
  cin>>marks;
   sum=sum+marks;
 }
 avg=sum/n;
  cout<<"\nAverage Grade of Student is: "<<avg<<endl;
   
}