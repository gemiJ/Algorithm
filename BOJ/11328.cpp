#include <bits/stdc++.h>
using namespace std;

int main() {

	int N;
	bool res = true;

	cin >> N;

	string str1, str2;

	for (int i = 0; i < N; i++) {
		vector<int> vec1(26, 0);
		vector<int> vec2(26, 0);
		res = true;
		cin >> str1 >> str2;
		for (int j = 0; j < str1.size(); j++) {
			vec1[str1[j] - 'a']++;
		}

		for (int j = 0; j < str2.size(); j++) {
			vec2[str2[j] - 'a']++;
		}

		for (int j = 0; j < 26; j++) {
			if (vec1[j] != vec2[j]) {
				res = false;
				cout << "Impossible" << "\n";
				break;
			}
		}

		if (res) {
			cout << "Possible" << "\n";
		}
	}
	

	return 0;
}