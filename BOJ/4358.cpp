#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {

	map <string, int> m;
	string str;
	int sum = 0;
	
	while (getline(cin,str)) {
		if (m.find(str) == m.end()) {
			m[str] = 1;
		}
		else {
			m[str]++;
		}
		sum++;
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " ";
		printf("%.4lf\n", (double)it->second / sum * 100);
	}

	return 0;
}