/* Task 7: C++ Program for Array Sorting */
#include <iostream>
using namespace std;

int main()
{
  int array[20],size,i,j,temp;
  cout<<"\nEnter the size of array:\n";
  cin>>size;
  cout<<"\nEnter array elements:\n";
  for(i=0;i<size;i++){
    cin>>array[i];
     }
     //using an inner and outer loop to sort the array
     for(i=0;i<size;i++){
       for(j=i+1;j<size;j++){
         if(array[i]>array[j]){
           temp=array[i];
           array[i]=array[j];
           array[j]=temp;
         }
       }
     }
     //printing sorted array using for loop
     cout<<"\nSorted array is:\n";
     for(i=0;i<size;i++){
       cout<<array[i]<<endl;
     }
   }