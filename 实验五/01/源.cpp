#include<iostream>
using namespace std;
class Time             // ∂®“ÂTime¿‡
{
public:
	void setHour(int h) { hour = h; }
	void setMinute(int m) { minute = m; }
	void setSec(int s) { sec = s; }
	void showHour() { cout << hour; }
	void showMinute() { cout << minute; }
	void showSec() { cout << sec; }
private:
    int hour;
    int minute;
    int sec;
};
int main()
{
	Time t1; 
	int hour, minute, sec;
	cin >> hour;
	cin >> minute;
    cin >> sec;
	t1.setHour(hour);
	t1.setMinute(minute);
	t1.setSec(sec);
	t1.showHour();
	cout << ":";
	t1.showMinute();
	cout << ":";
	t1.showSec();
	cout << endl;
	return 0;
}