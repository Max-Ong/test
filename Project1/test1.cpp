#include <iostream>
#include "mymath.h"
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << endl;
	cout << subtract(a, b) << endl;
	cout << multiply(a, b) << endl;
}