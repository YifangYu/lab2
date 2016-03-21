#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include"BMI.h"
using namespace std;
int main(){
	string data;
	ifstream fin("fin.txt",ios::in);
	ofstream fout("fout.txt",ios::out);
	int h,w;
	BMI bmi;
	while(fin>>h>>w){
		
		float bmii = 0;
		bmii=bmi.countbmi(w, bmi.hmeter(h));
		
		data=bmi.category();
		/*cout << "bmi:" << bmii << endl; 
		cout << "data" <<  data << endl;*/	

		fout<<bmii<<"/t"<<data<<endl;
	}
	return 0;
}

