#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	vector<int> input(n);
	vector<int> v(k+1,0);

	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	v[0] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j >= input[i]) {
				v[j] = v[j] + v[j - input[i]];
			}
		}
	}

	cout << v[k];

	return 0; 
}
