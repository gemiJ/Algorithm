#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N, v, cnt=0;

	cin >> N;

	vector<int> vec(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}

	cin >> v;

	for (int i = 0; i < N; i++) {
		if(vec[i] == v){
			cnt++;
		}
	}

	cout << cnt;

	return 0; 
}