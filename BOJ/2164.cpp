#include <bits/stdc++.h>
using namespace std;

int main() {

	int N;

	cin >> N;

	queue<int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	int front;

	while (q.size() > 1) {
		q.pop();
		front = q.front();
		q.pop();
		q.push(front);
	}

	cout << q.front();


	return 0;
}