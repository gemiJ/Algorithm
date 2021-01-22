#include <iostream>
using namespace std;

int main() {

	int L, P, V;
	int i = 0;

	while (1) {
		cin >> L >> P >> V;

		if (P == 0 && L == 0 && V == 0) {
			break;
		}

		int temp = V % P;
		if (temp >= L) {
			temp = L;
		}

		printf("Case %d: %d\n", ++i, V/P*L+temp);
	}

}