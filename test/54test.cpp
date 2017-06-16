#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int daphne=100,cleo=100;
  int year=0;
  while(cleo<=daphne)
{
  daphne+=10;
  cleo+=cleo*0.05;
  year++;
}

  cout<<year<<" years ,cleo is more than daphne"<<endl;
  cout<<"daphne is "<<daphne<<endl;
  cout<<"cleo is "<<cleo<<endl;

return 0;
}
