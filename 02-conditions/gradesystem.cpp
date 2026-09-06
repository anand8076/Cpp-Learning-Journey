#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<" enter your Marks:";
    cin>>n;
    if (n<=100 && n>=90)
    { cout<< "grade A";
    }
    else if (n<=89 && n>=75)
    { cout << "grade B";
    }
    else if (n<= 74 && n>= 60)
    {cout<<" grade C";
    }
    else if( n<=59 && n>=40 )
    { cout<<" grade D";
    }
    else if (n<40){
        cout<<" fail ";

    }
    else{
        cout<<" error! ";

    }


    
    return 0;
}