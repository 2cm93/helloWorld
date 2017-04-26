#include<iostream>
#include<string>
using namespace std;

int main() {
	int a = 0, b = 0;
	int t = 0;
	cin >> t;
	
	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		printf("Case #%d: %d + %d = %d\n", i,a,b, a + b);
	}

	return 0;
}
