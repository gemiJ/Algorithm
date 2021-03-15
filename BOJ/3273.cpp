#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, x;
	int l, r, cnt=0;

	cin >> n;

	vector<int> v(n);

	for (auto & t : v)
		cin >> t;

	cin >> x;

	sort(v.begin(), v.end());

	l = 0;
	r = n - 1;

	while (l < r) {

		if (v[l] + v[r] == x) {
			cnt++;
			r--;
		}
		else if (v[l] + v[r] < x) {
			l++;
		}
		else if (v[l] + v[r] > x) {
			r--;
		}
	}

	cout << cnt;

	return 0;
}