/* Task2: C++ program for simple calculator */
#include <iostream>
int main()
{
 using namespace std;
  cout<<"\n Welcome :)\n";
  int num1,num2;
  char op;
  cout<<"Enter the numbers: ";
  cin>>num1>>num2;
  cout<<"\nEnter the operation you wish to perform: "
  ;
  cin>>op;
  //basic switch case logic
  switch(op){
    case '+':
      cout<<num1+num2;
      break;
      case '-':
        cout<<num1-num2;
        break;
        case '/':
          cout<<num1/num2;
          break;
          case '*':
            cout<<num1*num2;
            break;
            case'%':
              cout<<num1%num2;
              break;
            
  }
  cout<<"\n Thanks for using me have a nice day:)";
  return 0;
  }