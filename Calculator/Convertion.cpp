#include "Convertion.h"

//define all the member of class Convertion
bool Convertion::IsConvertionPossible(System::String^ _from, System::String^ _to)
{
	if (_from == "Metres" && _to == "Centimetres")
	{
		return true;
	}
	else if (_from == "Metres" && _to == "Miles")
	{
		return true;
	}
	else if (_from == "Yards" && _to == "Centimetres")
	{
		return true;
	}
	else if (_from == "Yards" && _to == "Miles")
	{
		return true;
	}
	else if (_from == "Nautical Miles" && _to == "Miles")
	{
		return true;
	}
	else if (_from == "Nautical Miles" && _to == "Centimetres")
	{
		return true;
	}
	else if (_from == "Litres" && _to == "Pints")
	{
		return true;
	}
	else if (_from == "Cubic Metres" && _to == "Cubic Centimetres")
	{
		return true;
	}
	else if (_from == "Kilograms" && _to == "Pounds")
	{
		return true;
	}
	else if (_from == "Stone" && _to == "Kilograms")
	{
		return true;
	}
	else if (_from == "Miles Per Hour" && _to == "Kilometres Per Hour")
	{
		return true;
	}
	else if (_from == "Degrees" && _to == "Radians")
	{
		return true;
	}
	else 
	{
		return false;
	}
}

Convertion::Convertion()
{
	is_convertion_possible = false;
	convert_from = "";
	convert_to = "";
} 

//destructor
Convertion::~Convertion()
{

}