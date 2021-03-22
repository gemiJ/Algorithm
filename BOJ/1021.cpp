#include <bits/stdc++.h>
using namespace std;

int main() {

	int N, M, num;
	deque<int> deq;

	cin >> N >> M;

	vector<int> vec(M);

	for (int i = 0; i < M; i++) {
		cin >> num;
		vec[i] = num;
	}

	for (int i = 1; i <= N; i++) {
		deq.push_back(i);
	}

	int front, back;
	int second = 0, third = 0;
	int index;

	while (!vec.empty()) {

		for (int i = 0; i < deq.size(); i++) {
			if (vec[0] == deq[i]) {
				index = i;
				break;
			}
		}

		if (deq[0] == vec[0]) {
			deq.pop_front();
			vec.erase(vec.begin());
		}

		else {
			if (deq.size() / 2 >= index) {
				front = deq.front();
				deq.pop_front();
				deq.push_back(front);
				second++;
			}

			else if (deq.size() / 2 < index) {
				back = deq.back();
				deq.pop_back();
				deq.push_front(back);
				third++;
			}
			if (deq[0] == vec[0]) {
				deq.pop_front();
				vec.erase(vec.begin());
			}
		}

	}

	cout << second + third;

	return 0;
}