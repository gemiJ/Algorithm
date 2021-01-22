#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int num;
	string str;
	bool flag = true;
	int result = 0;

	cin >> num;

	for (int i = 0; i < num; i++) {
		flag = true;
		vector<int> v(26);

		cin >> str;
		v[str[0] - 97] ++;
		for (int j = 1; j < str.size(); j++) {
			if (str[j-1] - 'a' != str[j] - 'a') {
				v[str[j] - 'a'] ++;
			}
			if (v[str[j] - 'a'] > 1) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			result++;
		}
	}
	cout << result;
}