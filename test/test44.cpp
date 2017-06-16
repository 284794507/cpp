#include<iostream>
#include<cstring>

using namespace std;

int main()
{
  char firstName[20];
  char lastName[20];
  
 // len1=strlen(firstName);

 // strcpy(firstName,lastName);
 // strcat(firstName,lastName);

  cout<<"please enter your first name:";
  cin>>firstName;
  cout<<firstName<<endl;

  cout<<"please enter your last name:";
  cin>>lastName;
  cout<<lastName<<endl;
  
  int len=strlen(firstName)+1+strlen(lastName);
  char fullName[len];
  strcpy(fullName,lastName);
  strcat(fullName,",");
  strcat(fullName,firstName);
 
  cout<<"The full Name is :"<<fullName<<endl;

 

  return 0;
}
