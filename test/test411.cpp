#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  cout<<"please enter the word,and quit with 'end'"<<endl;
  //string val;
  char val[4]={};
  while(cin>>val)
{
  cout<<val<<endl;
  cout<<sizeof(val)<<endl;
 
  val[3]='\0';
  if(val=="end")
{
  break;
}
}
  
  
  return 0;
}
