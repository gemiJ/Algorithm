#include <bits/stdc++.h>
using namespace std;

int main() {

	int E, S, M;

	cin >> E >> S >> M;

	int e = 1, s = 1, m = 1;
	int year = 1;

	while (1) {

		if (E == e && S == s && M == m)
			break;
		
		e = (e % 15 == 0 ? 1 : ++e);
		s = (s % 28 == 0 ? 1 : ++s);
		m = (m % 19 == 0 ? 1 : ++m);

		year++;

	}

	cout << year;


	return 0;
}