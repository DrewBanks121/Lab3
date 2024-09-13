/*
	Andrew Banks
	Computer Science Fall 2024
	Due: 10/1/2024
	Lab3 - Lab 3 User and File I/O
	Calculate mean and population standered deviation using input from a file and output the numbers to a file
*/

#include <iostream>
#include <string>
#include "Calc.h"
#include "fstream"

int getInput(std::string nubName);
void printNumber(int number);


int main() {

	std::cout << "Please provide 4 numbers" << std::endl;


	//Creates a way to get input from file
	std::ifstream inFile;
	inFile.open("inMeanStd.dat");
	int number1, number2, number3, number4;
	inFile >> number1 >> number2 >> number3 >> number4;
	std::cout << "The numbers you chose are : " << number1 << ", " << number2 << ", " << number3 << ", " << number4 << std::endl;
	inFile.close();

	//Calls the function to calculate mean and population standered deviation
	Calc calc;
	float mean = calc.mean(number1, number2, number3, number4);
	std::cout << "The mean of the numbers is : " << mean << std::endl;

	float Std = calc.Std(number1, number2, number3, number4);
	std::cout << "The population standerd deviation is : " << Std << std::endl;

	// file I/O
	std::ofstream outFile;
	outFile.open("output.dat");
	outFile << "Your numbers are" << number1 << number2 << number3 << number4;
	outFile << "The mean of the number is : " << mean << std::endl;
	outFile << "The population standerd deviation is : " << std::endl;
	outFile.close();

	return 0;
}

//Get numbers testing
int getInput(std::string nubName)
{
	std::cout << "please enter the " << nubName << " number: ";
	int input;
	std::cin >> input;
	return input;
}

//out put numbers testing
void printNumber(int number)
{
	std::cout << number << std::endl;
}
