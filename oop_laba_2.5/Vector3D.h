#include "Triad.h"
#include <iostream>
#include <string> 
#include <sstream>
#pragma once

class Vector3D
{
private:

	Triad triad;

public:

	Triad get_Triad() const { return triad; }
	void set_Triad(Triad triad) { this->triad = triad; }

	Vector3D();
	Vector3D(const Triad t) :triad(t) {}
	Vector3D(const Vector3D& t) { triad = t.triad; }

	void init(Triad triad) { set_Triad(triad); }
	void display() const;
	void read();


	operator string() const;

	friend ostream& operator <<(ostream&, const Vector3D&);
	friend istream& operator >>(istream&, Vector3D&);
	
	friend Vector3D operator + (const Vector3D&, const Vector3D&);
	friend int operator * (const Vector3D, const Vector3D);

	Vector3D& operator++();
	Vector3D& operator--();
	Vector3D operator++(int);
	Vector3D operator--(int);

	~Vector3D(void) {};
};

