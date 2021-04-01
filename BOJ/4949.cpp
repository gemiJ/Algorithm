#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;	

	while (true) {

		stack<char> st;
		bool res = true;
		getline(cin, str);
		
		if (str == ".") break;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') {
				st.push('(');
			}
			else if (str[i] == '[') {
				st.push('[');
			}
			else if (str[i] == ')') {
				if (!st.empty() && st.top() == '(')
					st.pop();
				else {
					res = false;
					break;
				}					
			}
			else if (str[i] == ']') {
				if (!st.empty() && st.top() == '[')
					st.pop();
				else
				{
					res = false;
					break;
				}				
			}
		}

		if (!st.empty() || !res) {
			cout << "no" << "\n";
			res = false;
		}

		if (res) {
			cout << "yes" << "\n";			
		}
		
	}


	return 0;
}