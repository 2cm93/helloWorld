#include<cstdio>
#include<iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int k = n; k > i; k--) {
			printf(" ");
		}
		for (int j = 0; j < i*2-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
