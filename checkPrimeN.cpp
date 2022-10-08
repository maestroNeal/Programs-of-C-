#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter number :\n";
 cin>>n;
 int i;
 if(n>=2){
       for(i=2;i<n;i++){
          if(n%i==0){
              cout<<"number not prime "<<endl;
              break;
          }
        
       }
       if(i==n){
       cout<<"prime number ";
       }
    }
    else{
        cout<<"ple enter greater number ";
    }
 return 0;

}
