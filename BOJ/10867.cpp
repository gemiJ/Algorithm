#include <bits/stdc++.h>

using namespace std;

int main() {

	int N;

	cin >> N;

	vector<int> vec(N);
	
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}
	
	sort(vec.begin(), vec.end());

	cout << vec[0] << " ";

	for (int i = 1; i < N; i++) {
		if (vec[i] == vec[i - 1]) {
			continue;
		}
		cout << vec[i] << " ";
	}

	return 0;
}