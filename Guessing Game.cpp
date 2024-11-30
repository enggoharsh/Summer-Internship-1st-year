
/*Task 4: C++ program for Guessing Game */
  
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  srand(time(0));//statement used to generate random number;
  int random_num=rand()%100+20;//random number generator
  int guess=0;
  int moves=0;
  cout<<"\nWELCOME TO NUMBER GUESSING GAME :P\n";
   do {
    moves++;
    cout<<"Ente your guess: ";
    cin>>guess;
    if (guess==random_num){
      cout<<"\nCongrats!You guessed it right after"<<moves<<" moves\n";
    }
    else if(guess>random_num){
     cout<<"Higher\n";
    }
    else if(guess<random_num){
      cout<<"Lower\n";
    }
  }while(guess!=random_num);
    
}