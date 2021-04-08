#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

	int N, M;
	string str1, str2;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> M;
		unordered_map<string, int> um;
		int res = 1;
		for (int j = 0; j < M; j++) {
			cin >> str1 >> str2;
			um[str2] ++;
		}
		for (auto x : um) {
			res *= (x.second + 1);
		}
		cout << res - 1 << '\n';
	}

	return 0;
}