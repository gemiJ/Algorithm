#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	vector<int> origin(N);
	vector<int> v(N);
	unordered_map<int, int> um;
	
	int x;

	for (int i = 0; i < v.size(); i++) {
		cin >> x;
		v[i] = x;
		origin[i] = x;
	}
	
	sort(v.begin(), v.end());

	int num = 0;
	um[v[0]] = num;
	for (int i = 1; i < v.size(); i++) {
		if (v[i - 1] == v[i]) {
			um[v[i]] = num;
		}
		else {
			um[v[i]] = ++num;
		}
	}

	for (int i = 0; i < origin.size(); i++) {
		cout << um.find(origin[i])->second << " ";
	}

	return 0;
}