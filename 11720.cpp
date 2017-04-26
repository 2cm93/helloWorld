#include<cstdio>
#include<iostream>
using namespace std;

int main() {
	int t = 0; 
	int sum = 0;
	int a = 0;
	cin >> t;
	while (t--) {
		scanf("%1d", &a);
		sum += a;
	}
	cout << sum << endl;

	return 0;
}
