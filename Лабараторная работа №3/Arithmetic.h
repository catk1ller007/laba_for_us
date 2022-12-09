#pragma once
#include"Poliz.h"
#include"Stack.h"
class Arithmetic {
private:
	std::string str;
	Poliz* poliz;
public:
	Arithmetic(std::string _str);
	Arithmetic(const Arithmetic& tmp);
	Arithmetic& operator=(const Arithmetic& tmp);
	~Arithmetic();
	double calculate();
	Poliz* get_poliz();
};