#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

	ll N, B, C;

	cin >> N;

	vector<ll> v(N);

	for (auto &x : v) {
		cin >> x;
	}
	
	cin >> B >> C;

	ll man1=0, man2=0;

	for (int i = 0; i < v.size(); i++) {
		v[i] -= B;
		man1++;

		if (v[i] > 0) {
			man2 += ceil(v[i] / (double)C);
		}
	}
	
	cout << man1 + man2;
	
	return 0;
}