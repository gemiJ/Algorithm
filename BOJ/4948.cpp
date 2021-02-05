#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

	int temp = 1;

	vector<int> input;

	while (true) {
		cin >> temp;
		if (temp == 0) {
			break;
		}
		input.push_back(temp);
	}

	int maxVal = *max_element(input.begin(), input.end());

	vector<int> v(2 * maxVal + 1, 0);
	
	v[0] = 1;
	v[1] = 1;

	//소수아닌 것 1

	for (int i = 2; i <= sqrt(2 * maxVal + 1); i++) {
		for (int j = i + 1; j <= 2 * maxVal; j++) {
			if (v[j] != 1 && j % i == 0) {
				v[j] = 1;
			}
		}
	}

	vector<int> cnt(2 * maxVal + 1, 0);

	int sum = 0;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] == 0) {
			sum++;
		}
		cnt[i] = sum;
	}

	for (int i = 0; i < input.size(); i++) {
		cout << cnt[2 * input[i]]  - cnt[input[i]] << '\n';
	}

	return 0;
}