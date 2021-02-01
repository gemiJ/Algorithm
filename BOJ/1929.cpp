#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	int M, N;

	cin >> M >> N;

	vector<int> v(N+1, 0);
	v[0] = 1;
	v[1] = 1;

	//소수아닌 것 1

	for (int i = 2; i <= sqrt(N); i++) {
		for (int j = i+1; j <= N; j++) {
			if (v[j]!=1 && j % i == 0 ) {
				v[j] = 1;
			}
		}
	}

	for (int i = M; i < v.size(); i++) {
		if (v[i] != 1) {
			cout << i << "\n";
		}
	}


	return 0;
}