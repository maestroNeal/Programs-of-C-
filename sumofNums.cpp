#include<iostream>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    if(n>=0){
        for(int i=0;i<=n;i++){
            sum=sum+i;
        }
         cout<<"sum is "<<sum;
    }
    else{
        cout<<"ple enter the value greater than 0 ";
    }
   
}
