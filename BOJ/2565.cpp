#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;

	cin >> n;

	vector<vector<int>> v(n, vector<int>(2));
	vector<int> dp(n, 1);

	for (int i = 0; i < n; i++) {
		cin >> v[i][0] >> v[i][1];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (v[i][1] < v[j][1] && dp[i] + 1 > dp[j]) {
				dp[j] = dp[i] + 1;
			}
		}
	}

	cout << n - *max_element(dp.begin(), dp.end());

	return 0;
}