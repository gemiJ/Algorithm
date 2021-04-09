#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	string str1, str2;
	unordered_map<string, string> um;

	for (int i = 0; i < N; i++) {
		cin >> str1 >> str2;
		um[str1] = str2;
	}

	for (int i = 0; i < M; i++) {
		cin >> str1;
		cout << um.find(str1) -> second << "\n";
	}

	return 0;
}