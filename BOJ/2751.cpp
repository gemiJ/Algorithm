#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);

	for (auto &x : v) {
		cin >> x;
	}

	sort(v.begin(), v.end());

	for (auto x : v) {
		cout << x << "\n";
	}

	return 0;
}