#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		// check if 'n' is divisible by ('i' + 1)
		if (n % (i + 1) == 0) {
			// if yes, then truncate the substring of 's' from index 0 up to ('i' + 1)
			string temp = s.substr(0, i + 1);
			// reverse 'temp'
			reverse(temp.begin(), temp.end());
			// update the characters in the substring chosen using 'temp'
			for (int j = 0; j < (int) temp.size(); j++) {
				s[j] = temp[j];
			}
		}
	}
	cout << s << '\n';
	return 0;
}
