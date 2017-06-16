#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

  struct pizzaInfo
{
  string companyName;
  unsigned int diameter;
  float weight;
};

  pizzaInfo * aPizza=new pizzaInfo;
  
  cout<<"please enter the comppanyName:";
  getline(cin,(* aPizza).companyName);
  cout<<aPizza->companyName<<endl;
    
  cout<<"please enter the diameter:";
  cin>>(* aPizza).diameter;
  cout<<aPizza->diameter<<endl;

  cout<<"please enter the weight:";
  cin>>aPizza->weight;
  cout<<(* aPizza).weight<<endl;
  
 delete aPizza;

  return 0;
}
