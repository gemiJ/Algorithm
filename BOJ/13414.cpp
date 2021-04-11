#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int K, L;

	cin >> K >> L;

	map<string, int> m;
	string stdNum;

	for (int i = 1; i <= L; i++) {
		cin >> stdNum;
		m[stdNum] = i;
	}

	vector<pair<int, string>>v;
	
	for (auto it = m.begin(); it != m.end(); it++) {
		v.push_back({ it->second, it->first });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < K; i++) {
		if (i < v.size()) {
			cout << v[i].second << "\n";
		}
	}

	return 0;
}