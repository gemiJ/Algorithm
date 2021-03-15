#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	vector<int> v(26,0);

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		v[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << v[i] << " ";
	}

	return 0;
}