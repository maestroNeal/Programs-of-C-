#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    cout<<"ple number two number \n";
    cin>>n1>>n2;
    char op;
    cout<<"input an oprator \n";
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<(n1+n2);
         break;
    case '-':
        cout<<(n1-n2);
        break;
    case '*':
        cout<<(n1*n2);
        break;
    case '/':
        cout<<(n1/n2);
        break;
    default:
    cout<<"invalid choice";
        break;
    }
    return 0;
}