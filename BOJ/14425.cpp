#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {

	int N, M, res=0;
	string str;

	cin >> N >> M;
	unordered_map<string, int> S;

	for (int i = 0; i < N; i++) {
		cin >> str;
		S[str] = 0;
	}

	for (int i = 0; i < M; i++) {
		cin >> str;
		if (S.find(str) != S.end()) {
			res++;
		}
	}

	cout << res;

	
	return 0;
}