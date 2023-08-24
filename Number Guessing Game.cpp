#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand( (unsigned int) time(0));
    int number= (rand()%100) + 1;
    int guess=0;
    do{
        cout<<"Guess the number between 1-100:";
        cin>>guess;
        if(guess>number){
            cout<<"Guess lower number!!"<<endl;}
        else if (guess<number){
            cout<<"Guess higher number!!"<<endl;}
        else{
            cout<<"YOU WON"<<endl;
        }
        }while (guess!=number);
    }
