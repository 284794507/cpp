#include<iostream>
#include<array>
#include<string>
#include<vector>

using namespace std;
int main()
{
	array<int,3> iArr={};
	cout<<"The length of iArr is:"<<endl;
	cout<<sizeof(iArr)<<endl;
	int i=0;
	for(i=0;i<3;i++)
{
		cout<<"iArr["<<i<<"]"<<endl;
		cout<<iArr[i]<<endl;
}
	for(int p:iArr)
{
	cout<<p<<endl;
}
	char cArr[]="cheseburger";
	cout<<"cArr"<<cArr<<endl;
	
	string str="Waldorf Salad";
	cout<<"Str:"<<str<<endl;
	
	struct fish{
	string fish_type;
	int weight;
	float len;
};
	fish fish1={"fish1",1,1.1};
	cout<<"fish1.fishtype:"<<fish1.fish_type<<endl;
	cout<<"fish1.weight:"<<fish1.weight<<endl;
	cout<<"fish1.len:"<<fish1.len<<endl;	
	
	enum Reponse{Yes=1,No=0,Maybe=2};
	
	double ted=0;
	double* pToRed=&ted;
	cout<<"ted:"<<* pToRed<<endl;
		
	float trcacle[10]={1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.10};
	float * p1=&trcacle[0];
	cout<<"trcacle[0]:"<<*p1<<endl;
	cout<<"trcacle[9]:"<<*(p1+9)<<endl;
	
	cout<<"Please enter a unsighed int data:"<<endl;
	int iLen;
	cin>>iLen;
	int * iArr2=new int[iLen];
	vector<int> iArr3(iLen);
	cout<<(int *) "Home of the jolly bytes"<<endl;
	
	
	
	return 0;
}
