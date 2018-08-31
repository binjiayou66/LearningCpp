#include <iostream>
using namespace std;

const int Len = 66;

void subdivide(char *arr, int low, int max, int level);

int main()
{
	char arr[Len];
	for (int i = 0; i < Len - 2; ++i)
	{
		arr[i] = ' ';
	}
	arr[Len - 1] = '\0';
	int min = 0;
	int max = Len - 2;
	arr[min] = '|';
	arr[max] = '|';

	for (int i = 0; i < 6; ++i)
	{
		subdivide(arr, min, max, i);
		cout << arr << endl;
	}

	return 0;
}

void subdivide(char *arr, int low, int max, int level)
{
	if (level <= 0)
	{
		return;
	}
	int mid = (low + max) / 2;
	arr[mid] = '|';
	subdivide(arr, low, mid, level - 1);
	subdivide(arr, mid, max, level - 1);
}