#include<cstdio>
#include<iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	
	for (int i = 1; i <= 2 * n - 1; i++) {
		if (i <= n) {
			for (int j = 1; j <= n-i; j++) {
				printf(" ");
			}
			for (int k = 1; k <= i; k++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			for (int j = 1; j <= i - n; j++) {
				printf(" ");
			}
			for (int k = 1; k<=2 * n - i; k++) {
				printf("*");
			}
			printf("\n");

		}
	}
	
	return 0;
}
