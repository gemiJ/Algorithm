#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;

void preorder(char node) {
	cout << node;
	for (int i = 0; i < v[node-65].size(); ++i) {
		preorder(v[node-65][i]);
	}
}

//
void inorder(char node) {

}

void postorder(char node) {
	for (int i = 0; i < v[node - 65].size(); ++i) {
		postorder(v[node - 65][i]);
	}
	cout << node;
}

int main() {

	int N;
	cin >> N;

	v.resize(N + 1);

	char x1, x2, x3;
	for (int i = 0; i < N; i++) {
		cin >> x1 >> x2 >> x3;
		if(x2 != '.')
			v[x1 - 65].push_back(x2);
		if(x3!= '.')
			v[x1 - 65].push_back(x3);
	}

	preorder('A');
	cout << "\n";

	inorder('A');
	cout << "\n";

	postorder('A');
	cout << "\n";
}