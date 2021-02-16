#include "Input.h"

//start defining the member functions of class Input

//input numbers into the textbox
void Input::InputNumberIntoTextbox(System::Object^ sender, Button^ number_button, TextBox^ textbox)
{
	//cast the value from the button returned by the recently called event 
	number_button = safe_cast<Button^>(sender);

	//check if textbox is empty
	if (textbox->Text == "")
	{
		//if empty is true

		//write the text value in the textbox
		textbox->Text = number_button->Text;
		
	}
	else
	{
		//if empty is false

		//add the text value in the textbox
		textbox->Text += number_button->Text;
	}
}

//clear the textbox
void Input::ClearScreen(TextBox^ textbox)
{
	textbox->Text = "";
}

//display something on the textbox
void Input::Display(TextBox^ textbox, double what_to_display)
{
	textbox->Text = System::Convert::ToString(what_to_display);
}

void Input::Display(TextBox^ textbox, String^ what_to_display)
{
	textbox->Text = what_to_display;
}

//return text from textbox
String^ Input::ReturnTextFromTextbox(TextBox^ textbox, Input i)
{
	i.old_text = textbox->Text;
	return i.old_text;
}

//constructor
Input::Input()
{
	old_text = "";
	new_text = "";
	length = 0;
}

//copy constructor
Input::Input(const Input% object)
{
	old_text = object.old_text;
	new_text = object.new_text;
	length = object.length;

}

//destructor
Input::~Input()
{

}