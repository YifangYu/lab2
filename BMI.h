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
float countbmi(float bmi);
string category(string data);
private:
int h;
float bmi;
string data;
};

