#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<BMI.h>
using namespace std;
int main(){
string data;
ifstream fin("fin.txt",ios::in);
ofstream fout("fout.txt",ios::out);
float bmi,h,w;
BMI bmi();
while(fin>>h>>w){
bmi.hmeter(h);
bmi.countbmi(bmi);
bmi.category(data);
}
cout<<bmi<<"\t"<<data<<endl;
fout<<bmi<<"\t"<<data<<endl;
}
return 0;
}

