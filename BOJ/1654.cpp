#include <bits/stdc++.h>
using namespace std;

int main() {

	int K, N;

	cin >> K >> N;

	vector<int> vec(K);

	for (auto &x : vec) {
		cin >> x;
	}

	long long l = 1;
	long long r = *max_element(vec.begin(), vec.end());
	long long mid;
	long long cnt, ans = 0;

	while (l <= r) {
		cnt = 0;
		mid = (l + r) / 2;
		for (int i = 0; i < vec.size(); i++) {
			cnt += vec[i] / mid;
			
		}
		if (cnt >= N) {
			l = mid + 1;
			if (ans < mid) {
				ans = mid;
			}
		}
		else if (cnt < N) {
			r = mid - 1;
		}
	}

	cout << ans;

	return 0;
}