#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter any number to check if its prime or not:";
    cin>>n;

    if(n<2){
        cout<<"not prime";
        return 0;
           }
    else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0){
                cout<<"not prime";
                return 0;
                      }     
        }
            
cout<<"the number is prime";
        
        }
    return 0;
}