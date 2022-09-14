#include "Vector.h"
#include "pch.h"
#include <iostream>

const Vector Vector::zeroV(0, 0);
const Vector Vector::oneV(1, 1);

Vector Vector::operator + (Vector vToAdd) {
	return Vector(this->x + vToAdd.x, this->y + vToAdd.y);
}

Number Vector::polarR() {
	return Number(sqrt(x * x + y * y));
}

Number Vector::polarF() {
	return Number(arctg(y / x));
}

void Vector::print() {

	std::cout << "(";
	x.print();
	std::cout << ", ";
	y.print();
	std::cout << ")";
}