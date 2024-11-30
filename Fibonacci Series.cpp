/*Task 3: C++ program for Fibonacci Series */

#include <iostream>
int main(){
  using namespace std;
  int t1,t2,n,nxtTerm,i;
  t1=0;
  t2=1;
  cout<<"\nEnter the number of terms you want to print: ";
  cin>>n;
  for(i=1;i<=n;i++){
    //to print first term 
    if(i==1){
      cout<<t1<<",";
      continue;
    }
    // to print second term
    if(i==2){
      cout<<t2<<",";
      continue;
    }
    nxtTerm=t1+t2;
    t1=t2;
    t2=nxtTerm;
    cout<<nxtTerm<<",";
    
  }
  
  
  return 0;
  
}