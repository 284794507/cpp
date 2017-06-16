#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  char * month[]={"1","2","3","4","5","6","7","8","9","10","11","12"};
 // char (*month)[12];
//  month[1]="1";
  int mBooks[12];
  int i=0;
  for(char *curM :month)
  {
      cout<<"Please enter the amount of "<<curM<<" month:"<<endl;
      cin>>mBooks[i];
cout<<mBooks[i]<<endl;
      i++;
	
  
}
int sum=0;
  for(int val:mBooks)
{
  sum+=val;
}
cout<<"The Total is :"<<sum<<endl;

  return 0;
}
