#include <bits/stdc++.h>
using namespace std;

int main() {

	int T;
	string str;

	cin >> T;

	for (int i = 0; i < T; i++) {
		
		cin >> str;

		if (str.size() % 2 == 1) {
			cout << "NO" << "\n";
			continue;
		}

		stack <char> s;
		bool temp = true;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') {
				s.push('(');
			}
			else if (str[j] == ')') {
				if (s.empty()) {
					temp = false;
					break;
				}
				s.pop();
			}
		}
		if (!s.empty() || temp == false) {
			cout << "NO" << "\n";
		}
		else {
			cout << "YES" << "\n";
		}
	}

	return 0;
}