#include <iostream>
#include "add.h"
#include "subtract.h"
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << endl;
	cout << subtract(a, b) << endl;
}