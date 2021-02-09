#include <iostream>
#include <vector>
using namespace std;

int N, M, cnt = 0;
vector<int> v;
vector<bool> visit;

void print() {

	if (v.size() == M) {
		for (int j = 0; j < v.size(); j++) {
			cout << v[j] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			visit[i] = true;
			v.push_back(i);
			print();
			visit[i] = false;
			v.pop_back();	
		}

	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	visit.assign(N + 1, false);
	print();

	return 0;
}