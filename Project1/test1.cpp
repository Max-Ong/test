#include <iostream>
#include "mymath.h"
#include "booleanstuff.h"
#include "divide.h"
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << endl;
	cout << subtract(a, b) << endl;
	cout << multiply(a, b) << endl;
	
	bool happy = true;
	bool sad = false;
	bool isHappyAndSad = isTrue(happy, sad);
	cout << isHappyAndSad << endl;
	cout << divide(a, b) << endl;
}