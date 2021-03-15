#include <bits/stdc++.h>
using namespace std;

int main() {

	int N, K;
	int S, Y;
	int cnt = 0;

	vector<vector<int>> vec(2, vector<int>(6, 0));

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> S >> Y;
		vec[S][--Y]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			if (vec[i][j] != 0) {
				cnt += vec[i][j] / K;
				if (vec[i][j] % K != 0) {
					cnt++;
				}
			}
			//cnt += vec[i][j]%K==0? vec[i][j]/K : int(vec[i][j]/K)+1;
		}
	}
	
	cout << cnt;

	return 0; 
}