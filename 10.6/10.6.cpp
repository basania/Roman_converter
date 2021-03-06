// 10.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Roman_int_class.h"

Roman_int::Roman_int()
{
	digit_init();
	as_int(roman_numeral);
	print_result();
}

void Roman_int::digit_init()
{
	std::string roman;
	std::cout << "Enter a Roman numeral: ";
	std::cin >> roman;

	roman_numeral = roman; // private variable
	
}

int Roman_int::as_int(std::string& roman)
{
	int result_int = 0;

	for (int i = 0; i < roman.size(); ++i)
	{
		switch (roman[i])
		{
		case 'I':
			if ((roman[i] == 'I' && i + 1 < roman.size()) && roman[i + 1] == 'X')
				result_int = result_int + 9;
			else
				result_int = result_int + 1;
			break;
		case 'V': 
			result_int = result_int + 5; break;
		case 'X':
			if (roman[i] == 'X' && i != 0 && roman[i - 1] == 'I')
				break;
			else
				result_int = result_int + 10;
			break;
		case 'L': 
			result_int = result_int + 50; break;
		case 'C':
			result_int = result_int + 100; break;
		case 'D':
			result_int = result_int + 500; break;
		case 'M':
			result_int = result_int + 1000; break;
		}
	}
	return converted_int = result_int;

}

void Roman_int::print_result()
{
	std::cout << "Initial Roman is " << roman_numeral << ", converted integer is " << converted_int << std::endl;
}

int main()
{
	Roman_int literal1;
    return 0;
}

