#pragma once


#include <iostream>
#include<string.h>
#include"Convertion.h"
#include<math.h>

using namespace System;
using namespace std;
using namespace System::Windows::Forms;

//used ref to make this class a reference type, 
//will perform mathematical calculations
public ref class Calculate
{
	//
public:
	//variables
	//will store the first number value
	double number_1;
	//will store the second number
	double number_2;
	//will store the answer
	double answer;
	//will store the operation type
	char operation;
	//for convertions
	Convertion^ convertion;
	

	//method that stores the first number and determines the operation
	char ReturnOperation(Object^ sender, Button^ button, TextBox^ textbox);
	
	//method that performs arithmetic operations
	double PerformArithmeticOperation(Object^ sender, Button^ button, Calculate c, TextBox^ textbox);

	//method that performs the convertion
	double PerformConvertion(Object^ sender, Button^ button, Calculate c, TextBox^ textbox);

	bool IsEmpty(double a);

	//default constructor
	Calculate();

	//copy constrcutor with a tracking reference
	Calculate(const Calculate %object);

	//destructor
	~Calculate();
		
};