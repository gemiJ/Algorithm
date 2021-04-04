#include <bits/stdc++.h>
using namespace std;

int main() {

	int N, M;

	cin >> N;
	vector<int> vec(N);
	for (auto &x : vec) {
		cin >> x;
	}
	sort(vec.begin(), vec.end());

	cin >> M;
	vector<int> target(M);
	for (auto &x : target) {
		cin >> x;
	}

	vector<int> res(M);
	int l, r, mid;
	for (int i = 0; i < target.size(); i++) {
		l = 0; r = vec.size()-1 ; 
		while (l <= r) {
			mid = (l + r) / 2;
			if (vec[mid] == target[i]) {
				res[i] = 1;
				break;
			}
			else if (vec[mid] > target[i]) {
				r = mid - 1;
			}
			else if (vec[mid] < target[i]) {
				l = mid + 1;
			}
			res[i] = 0;
		}
	}
	
	for (auto &x : res) {
		cout << x << " ";
	}
	   	  

	return 0; 
}