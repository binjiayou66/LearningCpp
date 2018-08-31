#include <iostream>
using namespace std;

struct Dog
{
	char name[20];
	int age;
	double height;
};

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	cout << a[2] <<endl;
	cout << *(a + 2) << endl;
	cout << 2[a] << endl;

	int *ip = a;	
	cout << a << endl;
	cout << ip << endl;
	cout << ip + 1 << endl;	

	int (*ap)[5] = &a;
	cout << a << endl;
	cout << ap << endl;
	cout << ap + 1 << endl;

	// Struct
	Dog *dog = new Dog;
	//dog->name = "Wangwang";
	strcpy(dog->name, "Wangwang");
	dog->age = 3;
	dog->height = 0.6;

	cout << (*dog).name << "  ";
	cout << dog->age << "  ";
	cout << dog->height << endl;

	delete dog;	
	dog = NULL;	

	return 0;
}
