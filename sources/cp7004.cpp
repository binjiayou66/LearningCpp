#include <iostream>
#include <string>
#include <array>
using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons> *);
void show(array<double, Seasons>);

int main()
{
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);

	return 0;
}

void fill(array<double, Seasons> *pa)
{
	for (int i = 0; i < Seasons; ++i)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}

void show(array<double, Seasons> pa)
{
	double total = 0.0;
	for (int i = 0; i < Seasons; ++i)
	{
		cout << "The expenses of " << Snames[i] << " is $" << pa[i] << endl;
		total += pa[i];
	}
	cout << "Total expenses is $" << total << ".\n";
}