#include <iostream>
using namespace std;

int main()
{
	int arrayInt[4] = {11, 22, 33, 44};
	void *p1 = arrayInt;
	int *p2 = &(arrayInt[0]);
	int *p3 = &(arrayInt[1]);
	cout << arrayInt << endl;
	cout << "arrayInt address: " << p1 << endl;
        cout << "arrayInt[0] address: " << p2 << endl;
        cout << "arrayInt[1] address: " << p3 << endl;

	char dog[6] = {'d',' ','o','g','r'};
	char cat[6] = {'c', 'a', 't', 'f', 'e', '\0'};

	cout << dog << endl;
	cout << cat << endl;

	char name[] = "andy";
	cout << "The size of name is " << sizeof(name) << endl;

	char prop1[15] = {};
	char prop2[15] = {};

	cout << "input one word. \n";
	cin >> prop1;
	cout << "input another word. \n";
	cin >> prop2;
	cout << "You input " << prop1 << " and " << prop2 << endl;


	return 0;
}
