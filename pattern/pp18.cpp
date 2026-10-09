#include<iostream>
using namespace std;

int main()
{
    // taking values 
    int n;
    cout<<"enter value";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        // space print

        for(int j=1;j<=n-i;j++)
        {
           cout<<" ";
        }
        // star print

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}