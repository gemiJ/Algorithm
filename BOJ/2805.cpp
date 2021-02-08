#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N, M;

	cin >> N >> M;

	vector<long long> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	long long l = 0;
	long long r = *max_element(v.begin(), v.end());
	long long mid = (l + r) / 2;

	long long sum = 0;
	long long ans = 0;

	while (l <= r)
	{
		mid = (l + r) / 2;
		sum = 0; 
		for (int i = 0; i < v.size(); i++) {
			if (v[i] > mid ) {
				sum += v[i] - mid;
			}
		}
		if (sum == M) {
			ans = mid;
			break;
		}
		else if (sum > M) {
			l = mid + 1;
			if (ans < mid) {
				ans = mid;
			}
		}
		else if (sum < M) {
			r = mid - 1;
		}
	}
	
	cout << mid;

	return 0;
}