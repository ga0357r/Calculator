#include"Calculate.h"
#include"Input.h"

//start defining the member functions of class Calculate
//return an operation
char Calculate::ReturnOperation(Object^ sender, Button^ button, TextBox^ textbox)
{
	//variables


	//cast the value from the button returned by the recently called event 
	button = safe_cast<Button^>(sender);

	//determine the type of operation clicked and store it
	if (button->Text == "+")
	{
		//if + is pressed return +
		return '+';
	}
	else if (button->Text == "-")
	{
		//if - is pressed return -
		return '-';
	}
	else if (button->Text == "x")
	{
		//if x is pressed return x
		return 'x';
	}
	else if (button->Text == "÷")
	{
		//if ÷ is pressed return ÷
		return '÷';
	}
	else if (button->Text == "%") 
	{
		//if % is pressed return %
		return '%';
	}
	else if ((button->Text) == L"√") 
	{
		//if √ is pressed return √
		return static_cast<char>('s');
	}
	else if (button->Text == L"∛")
	{
		//if ∛ is pressed return ∛
		return ('c');
	}
	else if ((button->Text) == "x²") 
	{
		//if x² is pressed return x² 
		return ('x²');
	}
	else if ((button->Text) == "x³") 
	{
		//if x³ is pressed return x³ 
		return ('x³');
	}
	else if ((button->Text) == "x^y") 
	{
		//if x^y is pressed return x^y
		return ('^');
	}
	else
	{
		//if the current expression is not recognised return +
		return '+';
	}
}

//perform arithmetic operations
double Calculate::PerformArithmeticOperation(Object^ sender, Button^ button, Calculate c, TextBox^ textbox)
{
	//variables

	//if num 1 is not empty
	if (!c.IsEmpty(c.number_1))
	{
		//continue with operation
		switch (c.operation)
		{
			//if the operation is addition
		case '+':
		{
			c.answer = c.number_1 + c.number_2;
		}
		break;
		//if the operation is subtraction
		case '-':
		{
			c.answer = c.number_1 - c.number_2;
		}
		break;
		//if the operation is multiplication
		case 'x':
		{
			c.answer = c.number_1 * c.number_2;
		}
		break;
		//if the operation is division
		case '÷':
		{
			c.answer = c.number_1 / c.number_2;
		}
		break;
		//if the operation is modulus
		case '%':
		{
			//cast the value to int and save it a variable of type  double
			c.answer = (int)c.number_1 % (int)c.number_2;
		}
		break;
		//if the operation is square root
		case 's' :
		{
			c.answer = sqrt(c.number_1);
		}
		break;
		//if the operation is cube root
		case 'c':
		{
			c.answer = cbrt(c.number_1);
		}
		break;
		//if the operation is x²
		case (char)-78:
		{
			c.answer = pow(c.number_1,2);
		}
		break;
		//if the operation is x³
		case (char)-77:
		{
			c.answer = pow(c.number_1, 3);
		}
		break;
		//if the operation is x^y
		case '^':
		{
			c.answer = pow(c.number_1, c.number_2);
		}
		break;
		default:
		{

		}
		break;
		}
	}

	//return the answer
	return c.answer;
}

double Calculate::PerformConvertion(Object^ sender, Button^ button, Calculate c, TextBox^ textbox)
{
	//if num1 is not empty
	if (!c.IsEmpty(c.number_1))
	{
		//from metres to centimetres
		if (c.convertion->convert_from == "Metres" && c.convertion->convert_to == "Centimetres")
		{
			c.answer = c.number_1 * 100;
		}
		//from metres to miles			//additional functionality
		if (c.convertion->convert_from == "Metres" && c.convertion->convert_to == "Miles")
		{
			c.answer = c.number_1 / 1609.344;
		}
		//from yards to centimetres
		else if (c.convertion->convert_from == "Yards" && c.convertion->convert_to == "Centimetres")
		{
			c.answer = c.number_1 * 91.44;
		}
		//from yards to Miles
		else if (c.convertion->convert_from == "Yards" && c.convertion->convert_to == "Miles")
		{
			c.answer = c.number_1 / 1760;
		}
		//from Nautical miles to miles
		else if (c.convertion->convert_from == "Nautical Miles" && c.convertion->convert_to == "Miles")
		{
			c.answer = c.number_1 * 1.151;
		}
		//from Nautical miles to centimetres
		else if (c.convertion->convert_from == "Nautical Miles" && c.convertion->convert_to == "Centimetres")
		{
			c.answer = c.number_1 * 185200;
		}
		//from Litres to Pints
		else if (c.convertion->convert_from == "Litres" && c.convertion->convert_to == "Pints")
		{
			c.answer = c.number_1 * 1.76;		
		}
		//from Cubic metres to Cubic centimetres
		else if (c.convertion->convert_from == "Cubic Metres" && c.convertion->convert_to == "Cubic Centimetres")
		{
			c.answer = c.number_1 * 1e+6;
		}
		//from Kilograms to pounds
		else if (c.convertion->convert_from == "Kilograms" && c.convertion->convert_to == "Pounds")
		{
			c.answer = c.number_1 * 2.205;
		}
		//from Stones to Kilograms
		else if (c.convertion->convert_from == "Stone" && c.convertion->convert_to == "Kilograms")
		{
			c.answer = c.number_1 * 6.35;
		}
		//from Miles Per Hour to Kilometres Per Hour
		else if (c.convertion->convert_from == "Miles Per Hour" && c.convertion->convert_to == "Kilometres Per Hour")
		{
			c.answer = c.number_1 * 1.609;
		}
		//from Degrees to Radians
		else if (c.convertion->convert_from == "Degrees" && c.convertion->convert_to == "Radians")
		{
			c.answer = c.number_1 * (3.14159265359/180);
		}
		else
		{
			return NAN;
		}
	}
	return c.answer;
}

//check if the first number is empty
bool Calculate::IsEmpty(double a)
{
	if (a == NULL)
	{
		//in case of a logic error, rectify it
		if (a == 0)
		{
			return false;

		}
		//else 
		else
		{
			return true;
		}
	}
}

//default constructor
Calculate::Calculate()
{
	//will store the first number value
	number_1 = NULL;

	//will store the second number
	number_2 = NULL;

	//will store the answer
	answer = NULL;

	//will store the operation type
	operation = NULL;

	//convertion
	convertion = gcnew Convertion();
	
}


//copy constrcutor
Calculate::Calculate(const Calculate %object)
{
	//dont know what to put in here yet

	//but basically I want to create a copy constrcutor for the Calculate class

	//but here goes
	number_1 = object.number_1;
	number_2 = object.number_2;
	answer = object.answer;
	operation = object.operation;
	convertion = object.convertion;
}

//destructor
Calculate::~Calculate()
{
	
}