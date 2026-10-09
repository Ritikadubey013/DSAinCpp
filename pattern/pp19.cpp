#include<iostream>
using namespace std;

int main()
{
   
    for(int i=1;i<=5;i++)
    {
        // space print

        for(int j=1;j<=5-i;j++)
        {
           cout<<" ";
        }
        // star print

        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

}