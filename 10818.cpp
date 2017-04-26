#include<cstdio>
#include<iostream>
using namespace std;

int main() {
	int n = 0; 
	cin >> n;
	int a = 0;
	int min = 1000000;
	int max = 0;
	while (n--) {
		cin >> a;
		if (a > max)max = a;
		if (a < min)min = a;
	}
	cout << min <<" "<< max << endl;
	return 0;
}
