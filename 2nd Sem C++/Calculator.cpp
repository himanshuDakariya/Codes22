#include<bits/stdc++.h>
using namespace std;

int main(){
int num1,num2;
char op;
cout<<"Enter first number";
cin>>num1;
cout<<"Enter second number";
cin>>num2;
cout<<"What do you want to perform between two"<<endl<<"[+,-,*,/,%,]";
cin>>op;

switch(op){
    case '+':
    cout<<num1+num2<<endl;
    break;

    case '-':
    cout<<num1-num2<<endl;
    break;
    case '*':
    cout<<num1*num2<<endl;
    break;

    case '/':
    cout<<num1/num2<<endl;
    break;

    case '%':
    cout<<num1%num2<<endl;
    break;

    default:
    cout<<"marna h kya tereko!!";
    break;
}
}