#include<iostream>
using namespace std;
int main(){

    int i,j,k;
    cin>>i>>j>>k;
    if(i>j){
        if(i>k){
            cout<<"greater "<<i<<endl;
        }
        else{
        cout<<"greater "<<k<<endl;
        }
    }
    else{
        if(j>k){
            cout<<"greater "<<j<<endl;
        }
        else{
            cout<<"greater "<<k<<endl;
        }
    }


}