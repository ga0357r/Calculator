#pragma once

#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

//This class will check if convertion is possible
public ref class Convertion
{
	//public members
public:
	//string to store what we are converting from
	String^ convert_from;

	//string to store what we are converting to
	String^ convert_to;

	//decide if convertion is possible
	bool is_convertion_possible;

	bool IsConvertionPossible(String^ _from, String^ _to);

	//default constructor
	Convertion();

	//destructor
	~Convertion();

	

	//private members
private:
	
};