#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the number:";
  cin>>n;
 
  int fib;

  fib=1;
  for(int i=1;i<=n;i++)
  {
   

    cout<<fib;
     fib=fib+i;
  }



  return 0;
}