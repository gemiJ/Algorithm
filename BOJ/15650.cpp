#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

void print(int i) {

	if (v.size() == M) {
		for (int j = 0; j < v.size(); j++) {
			cout << v[j] << " ";
		}
		cout << "\n";
		return;
	}

	while (i <= N) {
		v.push_back(i);
		print(++i);
		v.pop_back();
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	print(1);

	return 0;
}