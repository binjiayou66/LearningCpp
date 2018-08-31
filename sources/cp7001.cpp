#include <iostream>
using namespace std;

void n_chars(int, char);
void const_arr(const int[], int);
int addTwoArr(int *arr, int row, int column);
int addTowArrAnother(int **, int, int);

int main()
{
	n_chars(5, 'k');

	// test
	int arr[4] = {2, 3, 4, 5};
	cout << sizeof(arr) << endl;
	cout << arr << endl;
	cout << arr + 1 << endl;

	// const 
	int array[2] = {2, 3};
	const_arr(array, 2);

	// two
	int twoArr[2][3] = {{1, 2, 3}, {4, 5, 6}};
	cout << "result: " << addTwoArr((int *)twoArr, 2, 3) << endl;
	cout << "result: " << addTowArrAnother((int **)twoArr, 2, 3) << endl;

	return 0;
}

void n_chars(int times, char ch)
{
	while (times-- > 0)
		cout << ch << endl;
}

void const_arr(const int arr[], int len)
{
	cout << "in const_arr \n";
	//arr[0] = 9;  // compile error: read-only variable is not assignable
	cout << "out const_arr \n";
}

int addTwoArr(int *arr, int row, int column)
{
	int sum = 0;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < column; j++) {
			//int item = arr[i][j];
			int item = *(arr + i * column + j);
			cout << "item == " << item <<endl;
			sum += item;
		}
	}
	return sum;
}

int addTowArrAnother(int **arr, int row, int column)
{
	int sum = 0;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < column; j++) {
			//int item = arr[i][j];
			//int item = *(arr + i * column + j);
			int item = *((int *)arr + i * column + j);
			cout << "item == " << item <<endl;
			sum += item;
		}
	}
	return sum;
}
