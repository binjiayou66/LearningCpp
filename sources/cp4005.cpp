#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outHandle;
	outHandle.open("/Users/andy/Desktop/in.txt");

	outHandle << "Write something.";

	outHandle.close();

	return 0;
}
