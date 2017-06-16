#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  cout<<"please enter a interger:"<<endl;
  int sum,val;
  cin>>val;

  while(val!=0)

{
    sum+=val;
   cout<<"now ,sum is "<<sum<<endl;
  cout<<"please enter a interger:"<<endl;
  cin>>val;


  }
  return 0;
}
