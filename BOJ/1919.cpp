#include<bits/stdc++.h>
using namespace std;

int main() {

	string str1, str2;
	int res=0;
	vector<int> vec1(26, 0);
	vector<int> vec2(26, 0);
	

	cin >> str1 >> str2;

	for (int i = 0; i < str1.size(); i++) {
		vec1[str1[i] - 'a']++;
	}

	for (int i = 0; i < str2.size(); i++) {
		vec2[str2[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (vec1[i] > vec2[i]) {
			res += vec1[i] - vec2[i];
		}
		else if (vec1[i] < vec2[i]) {
			res += vec2[i] - vec1[i];
		}
		//res+=abs(vec1[i]-vec2[i]);
	}

	cout << res;
	
	return 0;

}