#include <bits/stdc++.h>
using namespace std;

int main() {

	int N, K;

	cin >> N >> K;

	vector<bool> vec(N + 1, true);

	int cnt = N;
	int index = 1;
	int temp = 1;

	cout << "<";

	while (cnt != 0) {

		if (index > N) {
			index = 1;
		}

		if (vec[index]) {
			if (temp == K) {
				vec[index] = false;
				if(cnt==1){
					cout << index << ">";
				}
				else{
					cout << index << ", ";
				}
				cnt--;
				temp = 1;
				continue;
			}
			temp++;
		}
		index++;
	}

	return 0;
}