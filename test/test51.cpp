#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  cout<<"please enter two integer:"<<endl;
  cout<<"first:"<<endl;
  int i1;
  cin>>i1;
  cout<<"second:"<<endl;
  int i2;
  cin>>i2;
  int sum;
//  for(int i=i1;i<=i2;i++)
//{
//  sum+=i;
//}
// 
  while(i1<=i2)
{
  sum+=i1++;
}
  cout<<"sum is "<<sum<<endl;
}
