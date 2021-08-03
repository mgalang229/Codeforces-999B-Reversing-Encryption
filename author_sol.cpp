#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 1; i <= n; i++) {
		// check if 'n' is divisible by 'i'
		if (n % i == 0) {
			// if yes, then reverse the characters in 's' from start to position 'i'
			reverse(s.begin(), s.begin() + i);
		}
	}
	cout << s << '\n';
	return 0;
}
