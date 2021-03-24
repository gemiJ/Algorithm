#include <bits/stdc++.h>
using namespace std;

int main() {

	int T;
	int A, B;
	int big, small, GCD;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		big = (A > B ? A : B);
		small = (A > B ? B : A);
		
		int res;
		while (1) {
			res = big % small;

			if (res == 0) {
				GCD = small;
				break;
			}

			big = small;
			small = res;
		}


		cout << (A/GCD) * (B/GCD) * GCD << "\n";
	}

	return 0;
}