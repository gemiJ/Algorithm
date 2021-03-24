#include <bits/stdc++.h>
using namespace std;

int main() {

	int a, b;
	int GCD=1; //최대공약수
	int LCM; //최소공배수

	cin >> a >> b;

	int small = (a < b ? a : b);

	int i = 1;
	while (1) {

		if (a%i == 0 && b%i == 0) {
			GCD = i;
		}
		
		if (i == small)
			break;

		i++;

	}

	LCM = (a / GCD) * (b / GCD) * GCD;

	cout << GCD << "\n" << LCM;

	return 0;
}