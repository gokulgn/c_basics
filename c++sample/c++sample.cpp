#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"enter your name";
	string name ;
	getline(cin,name);
	cout<<"'hello,"<<"your name has "<<name.size()<<"characters"<<endl;
	return 0;
}
