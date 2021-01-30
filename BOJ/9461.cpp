#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int T;
	cin >> T;
	
	vector<int> input(T);
	for (int i = 0; i < T; i++) {
		cin >> input[i];
	}
	
	vector<long long> v(3, 1);

	for (int i = 3; i < *max_element(input.begin(), input.end()); i++) {
		v.push_back( v[i-2] + v[i-3]);
	}

	for (int i = 0; i < T; i++) {
		cout << v[input[i]-1] << endl;
	}

	return 0; 
}