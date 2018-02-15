#pragma once

#include <iostream>
#include <string>

class Roman_int {
public:
	Roman_int();
	void digit_init();
	int as_int(std::string&);
	void print_result();

private:
	std::string roman_numeral;
	int converted_int;
};
