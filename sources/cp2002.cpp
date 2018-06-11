// input and output
#include <iostream>
#include <cmath>
using namespace std;

typedef struct MyStruct { 
	int a;
	char b;
	char *c;
}MyMyStruct;

int main()
{
	int num;
	cout << "How many bags do you have?" << endl;
	cin >> num;
	cout << "You have " << num << " bags." << endl;

	cout << "sqrt 9 is " << sqrt(9) << " ." << endl;

	int alternative(999);
	cout << "alternative: " << alternative << endl;

	alternative = 111;
	cout << "alternative: " << alternative << endl;

	int num1 = {1};
	cout << "num1: " << num1 << endl;

	int array1[3] = {1, 2, 3};
	cout << "array1: " << array1[0] << endl;

	MyMyStruct struct1 = {};
	//cout << "struct1: " << struct1.a << endl;
        //cout << "struct1: " << struct1.b << endl;
        //cout << "struct1: " << struct1.c << endl;

	struct1.a = 123;
	struct1.b = 'e';
	struct1.c = "abcd";

	cout << "struct1: " << struct1.a << endl;
        cout << "struct1: " << struct1.b << endl;
        cout << "struct1: " << struct1.c << endl;

	return 0;
}
