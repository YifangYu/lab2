#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
class BMI{
public:
	int w;
	int hmeter(int h);
	float countbmi(int w,int h);
	string category();
private:
	int h;
	float bmi;
	string data;
};

