#include <iostream>
#include "add.h"
#include "subtract.h"
#include "divide.h"
#include "multiply.h"
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << endl;
	cout << subtract(a, b) << endl;
	cout << divide(a, b) << endl;
	cout << multiply(a, b) << endl;
	cout << square(a) << endl;
}