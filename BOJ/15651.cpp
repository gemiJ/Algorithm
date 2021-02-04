#include <iostream>
#include <vector>
using namespace std;

int N, M, cnt = 0;
vector<int> v;

void print(int M) {

	for (int i = 1; i <= N; i++) {	
		if (cnt == M) {
			for (int j = 0; j < v.size(); j++) {
				cout << v[j] << " ";
			}
			cout << "\n";			
			return;
		}
		cnt++;
		v.push_back(i);
		print(M);	
		v.pop_back();
		cnt--;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	print(M);

	return 0;
}