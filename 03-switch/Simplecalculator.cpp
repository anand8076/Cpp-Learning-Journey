#include<iostream>
using namespace std;
int main() {
    int x,y;
    char a;
    cout<<"enter first digit :"<<endl;
    cin>>x;
    cout<<"eneter second digit :"<<endl;
    cin>>y;
    cout<<"enter the operation('+','-','*','/'): ";
    cin>>a;
    switch(a) {

        case '+':
        cout<<"result :"<< x+y;
        break;

        case '-':
        cout<<"result :"<< x-y;
        break;

        case '*':
        cout<<"result :"<<x*y;
        break;

        case '/':
        if (y != 0){
    cout<<"result :"<<x/y;
        }
        else{
            cout<<"error: division by zero is not allowed.";   
             }
    break;

    default:
    cout<<" invalid operation :";
    }

    return 0;
}