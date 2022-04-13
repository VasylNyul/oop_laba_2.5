#include "Vector3D.h"

#pragma once

using namespace std;

Vector3D::Vector3D()
	:triad()
{}


void Vector3D::display() const
{
	cout << endl;
	cout << "vector = " << endl;
	triad.display();
}
void Vector3D::read()
{
	Triad t;
	cout << endl;
	cout << "Vector = ?" << endl;
	t.read();
	init(t);
}


ostream& operator << (ostream& out, const Vector3D& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Vector3D& f)
{
	
	cout << "Vector = "; in >> f.triad;

	return in;
}

Vector3D::operator string() const
{
	return string(triad);
}

Vector3D operator +(const Vector3D& o, const Vector3D& u)
{
	Vector3D s;
	int a = o.triad.get_x() + u.triad.get_x();
	int b = o.triad.get_y() + u.triad.get_y();
	int c = o.triad.get_z() + u.triad.get_z();

	s.triad.set_x(a);
	s.triad.set_y(b);
	s.triad.set_z(c);

	return s;
}

int operator * (const Vector3D o, const Vector3D u)
{

	int a = o.triad.get_x() * u.triad.get_x();
	int b = o.triad.get_y() * u.triad.get_y();
	int c = o.triad.get_z() * u.triad.get_z();

	int s = a + b + c;

	return s;
}

Vector3D& Vector3D::operator++()
{
	++triad;
	return*this;
}

Vector3D& Vector3D::operator--()
{
	--triad;
	return*this;
}

Vector3D Vector3D::operator++(int)
{
	Vector3D s(*this);
	triad++;
	return s;
}

Vector3D Vector3D::operator--(int)
{
	Vector3D s(*this);
	triad--;
	return s;
}

