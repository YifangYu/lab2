#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include"BMI.h"

int BMI::hmeter(h){
h=h/100;
}

float BMI::countbmi(bmi){
bmi=w/(h*h);
}

string BMI::category(data){
{if(bmi<15) {data="Very severely underweight";
}else if(15<=bmi&&bmi<16){data="Severely underweight ";
}else if(16<=bmi&&bmi<18.5) {data="Underweight";
}else if(18.5<=bmi&&bmi<25) {data="Normal";
}else if(25<=bmi&&bmi<30) {data="Overweight";
}else if(30<=bmi&&bmi<35) {data="Obese Class I (Moderately obese)";
}else if(35<=bmi&&bmi<40) {data="Obese Class II (Severely obese)";
}else {data="Obese Class III (Very severely obese)";}
}
;}

