#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	string str;
	unordered_map<string, string> um;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> str;
		um[str] = to_string(i);
		um[to_string(i)] = str;
	}

	for (int i = 0; i < M; i++) {
		cin >> str;
		cout << um[str] << "\n";
	}
	
	return 0;
}