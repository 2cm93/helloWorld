#include<cstdio>
#include<iostream>
using namespace std;

int main() {
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	char week[7][4] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int count = 0;
	int mon=0, date=0;
	cin >> mon >> date;
	
	for (int i = 0; i < mon ; i++) {
		count += month[i];
	}
	count += date;
	printf("%s\n", week[count % 7]);

	return 0;
}
