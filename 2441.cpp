#include<cstdio>
#include<iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = n; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
