#include <iostream>
using namespace std;

struct travel_time
{
	int hours;
	int minutes;
};

travel_time sumTime(travel_time time1, travel_time time2);
void showTime(travel_time time);

int main()
{
	travel_time time1 = {5, 45};
	travel_time time2 = {4, 50};

	travel_time sum_time = sumTime(time1, time2);
	showTime(sum_time);

	return 0;
}

travel_time sumTime(travel_time time1, travel_time time2)
{
	int new_hour = time1.hours + time2.hours;
	int sum_min = time1.minutes + time2.minutes;
	new_hour += sum_min / 60;
	int new_minute = sum_min % 60;

	travel_time new_time = {new_hour, new_minute};
	
	return new_time;
}

void showTime(travel_time time)
{
	cout << "hours: " << time.hours << " minutes: " << time.minutes << endl;
}

