#include <bits/stdc++.h>

using namespace std;

int main() {

	int K, num;
	int sum = 0;
	stack<int> s;

	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else{
			s.push(num);		
		}
	}

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0; 
}