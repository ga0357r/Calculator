#pragma once
#include <iostream>
#include <string>

using namespace System;
using namespace std;
using namespace System::Windows::Forms;

//creates a class that handles input 
public ref class Input
{
public:
	//public variables

	//return the text
	String^ old_text;
	//store the edited text
	String^ new_text;
	//return the length of the text
	int length;

	//method that inputs a number into the textbox
	 void InputNumberIntoTextbox(System::Object^ sender, Button^ number_button, TextBox^ textbox);

	 //method that clears the textbox
	 void ClearScreen(TextBox^ textbox);
	 
	 //method that displays on the textbox
	 void Display(TextBox^ textbox, double what_to_display);
	 
	 //method that displays on the textbox
	 void Display(TextBox^ textbox, String^ what_to_display);

	 //method that returns the string from the textbox
	 String^ ReturnTextFromTextbox(TextBox^ textbox, Input i);

	 //constructor
	 Input();

	 //copy constrcutor with a tracking reference
	 Input(const Input% object);

	 //destructor
	 ~Input();
};