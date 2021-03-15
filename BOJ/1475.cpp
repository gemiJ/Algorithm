#include <bits/stdc++.h>
using namespace std;

int main() {

	int N;
	vector<int> vec(10, 0);

	cin >> N;

	if (N == 0) {
		cout << "1";
		return 0;
	}


	while (N != 0) {
		if ((N % 10 == 6 || N % 10 == 9) && vec[6] != vec[9] ) {
			vec[6] > vec[9] ? vec[9]++ : vec[6]++;
		}
		else {
			vec[N % 10]++;
		}		
		N /= 10;
	}
	
	
	cout << *max_element(vec.begin(), vec.end());

	return 0;
}