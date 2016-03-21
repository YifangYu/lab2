#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include"BMI.h"

int BMI::hmeter(int h){
h=h/100;
}

float BMI::countbmi(int w, int h){
	return (float)w / (h*h);
}

string BMI::category(){
{if(bmi<15) {return "Very severely underweight";
}else if(15<=bmi&&bmi<16){return "Severely underweight ";
}else if(16<=bmi&&bmi<18.5) {return "Underweight";
}else if(18.5<=bmi&&bmi<25) {return "Normal";
}else if(25<=bmi&&bmi<30) {return "Overweight";
}else if(30<=bmi&&bmi<35) {return "Obese Class I (Moderately obese)";
}else if(35<=bmi&&bmi<40) {return "Obese Class II (Severely obese)";
}else {return "Obese Class III (Very severely obese)";}
}

;}

