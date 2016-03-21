#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"a.h"
using namespace std;
int main(){
	float a,b,k;
	string str;
	ifstream infile("file.in",ios::in);
	ofstream outfile("file.out",ios::out);
	if(!infile){
			cerr<<"File open failed"<<endl;
			exit(1);
		    
		   }
	if(!outfile){
			cerr<<"Failed opening"<<endl;
			exit(1);
		    }
	while(infile>>a>>b){
	if(a==0||b==0)
	{
		cout<<"This is end of file"<<endl;
	}
	else
	{
		BMI bmi_1(b,a);
		k=bmi_1.BMIcount();
		str=bmi_1.BMIre(k);
		outfile<<k<<" "<<str<<endl;
	}
	}
		
	return 0;
}

