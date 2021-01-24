#include <iostream>
using namespace std;

int main() {

	int dp[31][31] = { 0, };
	int t, m, n;

	cin >> t;

	for (int i = 0; i < 31; i++) {
		dp[i][1] = i; 
		dp[i][0] = 1; 
	}

	while (t--)
	{
		cin >> n >> m;

		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}
		}

		cout << dp[m][n] << endl;
	}

}	