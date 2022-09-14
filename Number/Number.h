#pragma once
#include <iostream>
#include <cmath>


class Number {
private:
	double number;
public:
	static Number zero;
	static Number one;

	Number() {
		number = 0;
	}

	Number(double _number) {
		number = _number;
	}

	~Number() {}

	Number operator + (Number numToAdd) {
		return Number(this->number + numToAdd.number);
	}

	Number operator - (Number numToDec) {
		return Number(this->number - numToDec.number);
	}

	Number operator * (Number numToMul) {
		return Number(this->number * numToMul.number);
	}

	Number operator / (Number numToDiv) {
		return Number(this->number / numToDiv.number);
	}

	Number& operator = (Number num) {
		number = num.number;
		return *this;
	}

	Number& operator = (double num) {
		number = num;
		return *this;
	}

	void print();
	double getValue();
	void setValue(double);
};

Number sqrt(Number);
Number sin(Number);
Number arctg(Number);