#include <iostream>
using namespace std;

int main(){
    float a;
    float b;

    cout<<"Enter 1st number:";
    cin>>a;

    cout<<"Enter 2nd number:";
    cin>>b;

    char operation;
    cout<<"Enter the operation to be performed:";
    cin>>operation;

    double result;

    switch (operation)
    {
    case '+':
    result=a+b;
    break;

    case '-':
    result=a-b;
    break;
    
case '*':
result=a*b;
break;

case '/':
if(b==0){
    cout<<"Division cannot be performed as denominator=0"<<endl;
    return 1;}
    else{
        result=a/b;
        break;
}

    default:
    cout<<"Enter valid operation!!"<<endl;
    return 1;
    break;
    }
cout<<"Result:"<<result<<endl;
return 0;

}
