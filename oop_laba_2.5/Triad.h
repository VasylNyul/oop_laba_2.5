#include <iostream>
#include <string> 
#include <sstream>

#pragma once

using namespace std;

class Triad
{

private:

	int x, y, z;

public:

	int get_x() const { return x; }
	int get_y() const { return y; }
	int get_z() const { return z; }

	void set_x(int x) { this->x = x; };
	void set_y(int y) { this->y = y; };
	void set_z(int z) { this->z = z; };

	Triad();
	Triad(int, int, int);
	Triad(const Triad&);

	Triad& operator = (const Triad&);

	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);

	friend Triad operator + (const Triad&, const Triad&);
	friend Triad operator * (const Triad&, const Triad&);

	bool init(int, int, int );
	void display() const;
	void read();

	friend bool operator == (Triad&, Triad&);
	friend bool operator != (Triad&, Triad&);

	operator string() const;

	Triad& operator ++();
	Triad& operator --();
	Triad operator ++(int);
	Triad operator --(int);

	~Triad(void) {};

};

