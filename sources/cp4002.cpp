#include <iostream>
using namespace std;

struct dog 
{
	string name;
	int age;
	float height;
};

struct torgle_register
{
	unsigned int SN : 4;
//	unsigned int : 8;
//	bool goodIn : 1;
//	bool goodTorgle : 1;
};

int main()
{
	dog dog1;
	dog1.name = "Wang";
	dog1.age = 3;
	dog1.height = 50.0f;
	cout << "dog1: " << dog1.name << " " << dog1.age << " " << dog1.height << endl;	

	dog dog2 = {"Kong", 2, 30.0f};
        cout << "dog2: " << dog2.name << " " << dog2.age << " " << dog2.height << endl;

	dog dog3 = dog2;
	dog3.name = "Su";
        cout << "dog3: " << dog3.name << " " << dog3.age << " " << dog3.height << endl;

	dog list[2] = {
		{"Ki", 5, 20.0f}, {"Tee", 1, 15.0f}
	};
        cout << "dog4: " << list[0].name << " " << list[0].age << " " << list[0].height << endl;
        cout << "dog5: " << list[1].name << " " << list[1].age << " " << list[1].height << endl;

	cout << "Size of struct torgle_register: " << sizeof(torgle_register) << endl;

	return 0;
}
