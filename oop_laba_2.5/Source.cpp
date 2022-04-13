#include <iostream>
#include "Vector3D.h"
#include <string> 
#include <sstream>
using namespace std;

int main()
{
	Vector3D a, b;
	cout << "First vector : "; cin >> a; cout << endl;
	cout << "Second vector : "; cin >> b; cout << endl;

	cout << "Add vectors :" << endl;
	cout << a + b;

	cout << "Scalar product of vectors:" << endl;
	cout << a * b << endl;

	Triad t, r;
	cout << "First vector : "; cin >> t; cout << endl;
	cout << "Second vector : "; cin >> r; cout << endl;
	int f;
	cout << "Rivnistb :"<< endl;
	f = t == r;
	cout << "First vector = Second vector: " << f << endl;
	f = t != r;
	cout << "First vector != Second vector: " << f << endl;
	return 0;

}