#include <iostream>
#include <unordered_map>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

unordered_map<int, int> order;

bool compare(pair<int, int> a, pair<int, int> b) {
	
	if (a.first == b.first) {
		return order[a.second] < order[b.second];
	}
	else {
		return a.first > b.first;
	}
}

int main() {

	int N, C, num;

	cin >> N >> C;

	unordered_map<int, int> um;

	for (int i = 0; i < N; i++) {
		cin >> num;

		if (um.find(num) == um.end()) {
			um[num] = 1;
			order[num] = i;
		}
		else {
			um[num] ++;
		}
	}

	vector<pair<int, int>> vec;
	for (auto it = um.begin(); it != um.end(); it++) {
		vec.push_back({ it->second, it->first });
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[i].first; j++) {
			cout << vec[i].second << " ";
		}
	}

	return 0;
}