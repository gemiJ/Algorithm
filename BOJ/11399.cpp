#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

	int N;
	cin >> N;

	vector<int> input(N);

	for (auto &x : input) {
		cin >> x;
	}

	int sum = 0;

	sort(input.begin(), input.end());

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			sum += input[j];
		}
	}

	cout << sum;

	return 0;
}