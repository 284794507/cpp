#include<iostream>
#include<string>

using std::string;

using std::cout;
using std::cin;
using std::endl;

int main()
{
  cout<<"What is your first name:";
  string firstName;
  cin>>firstName;
  cout<<firstName<<endl;

  cout<<"What is your last name:";
 // string lastName;
//  cin>>lastName;
  char lastName[10];
  cin>>lastName;
  cout<<lastName<<endl;

  cout<<"What letter grade do you deserve?";
  char grade;
  cin>>grade;
  cout<<grade<<endl;

  cout<<"What is your age?";
  unsigned int age;
  cin>>age;
  cout<<age<<endl;

  cout<<"Name:"<<lastName<<","<<firstName<<endl;
  cout<<"Grade:"<<(char)(grade+1)<<endl;
  cout<<"Age:"<<age<<endl;


  return 0;
}
