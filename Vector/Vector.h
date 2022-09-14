#pragma once

#ifdef VECTOR_EXPORTS
#define VECTOR_API __declspec(dllexport)
#else
#define VECTOR_API __declspec(dllimport)
#endif

#include "Number.h"

class VECTOR_API Vector {
private:
	Number x;
	Number y;
public:
	static const Vector zeroV;
	static const Vector oneV;

	Vector() {
		x = 0;
		y = 0;
	}

	Vector(Number _x, Number _y) {
		x = _x;
		y = _y;
	}

	Vector operator + (Vector vToAdd);
	Number polarR();
	Number polarF();
	void print();
};
