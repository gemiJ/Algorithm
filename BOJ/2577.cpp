#include <iostream>
#include <vector>
using namespace std;

int main() {

	int A, B, C;
	int res;
	vector<int> v(10, 0);

	cin >> A >> B >> C;

	res = A * B * C;

	while (res != 0) {
		v[res % 10] ++;
		res /= 10;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << v[i] << "\n";
	}

	return 0;
}