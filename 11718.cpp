#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	int t = 101;
	while (t--) {
		getline(cin, s);
		if (s == "")
			break;
		cout << s << '\n';
	}

	return 0;
}
