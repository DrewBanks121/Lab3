#include "Calc.h"
#include <math.h>

float meanD = 4.0f;

//Calculates mean
float Calc::mean(int x1, int x2, int x3, int x4)
{
	meanStd = (x1 + x2 + x3 + x4) / meanD;
	return meanStd;
}

//Calculates population standered deviation
float Calc::Std(int x1, int x2, int x3, int x4)
{
	return sqrt((pow(x1 - meanStd ,2) + pow(x2 - meanStd, 2) + pow(x3 - meanStd, 2) + pow(x4- meanStd,2))/meanD) ;
}
