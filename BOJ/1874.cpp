#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, temp;

	cin >> n;

	vector<int> res(n);
	vector<bool> tf(n,true);
	stack<int> st;
	vector<char> ans;

	for (auto &num : res) {
		cin >> num;
	}

	temp = res[0];
	
	for (int i = 0; i < temp; i++) {
		tf[i] = false;
		st.push(i+1);
		ans.push_back('+');
	}

	st.pop();
	ans.push_back('-');

	temp = res[1];


	int j = 1;
	while (j < n) {
		if (res[j] > res[j-1]) {
			for (int i = res[j - 1]; i < res[j]; i++) {
				if (tf[i]) {
					ans.push_back('+');
					st.push(i+1);
					temp = st.top();
					tf[i] = false;
				}
			}
		}

		else if (res[j] < res[j-1]) {
			for (int i = res[j]; i < res[j-1]; i++) {
				if (tf[i]) {
					st.pop();
					ans.push_back('-');
				}
			}
		}

		if (res[j] == temp) {
			st.pop();
			ans.push_back('-');
			j++;
			if (j == n) {
				break;
			}
			if (!st.empty()) {
				temp = st.top();
			}	
		}
		else {
			printf("NO\n");
			return 0;
		}

	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}

	return 0; 

}