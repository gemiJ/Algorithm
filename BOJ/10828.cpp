#include <bits/stdc++.h>

using namespace std;

int main() {

	int N, num;
	string str; 
	stack<int> s;

	cin >> N;

	for (int i = 0; i < N; i++) {

		cin >> str;

		if (str == "push") {
			cin >> num;
			s.push(num);
		}
		else if (str == "pop") {
			if (s.empty()) {
				cout << "-1" << "\n";
			}
			else{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (str == "size") {
			cout << s.size() << "\n";
		}
		else if (str == "empty") {
			cout << (s.empty() ? "1" : "0") << "\n";
		}
		else if (str == "top") {
			if (s.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << s.top() << "\n";
			}
		}

	}


	return 0;

}