#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;

void preorder(char node) {
	if (node == '.') {
		return;
	}
	cout << node;
	preorder(v[node - 65][0]);
	preorder(v[node - 65][1]);
}

void inorder(char node) {
	if (node == '.') {
		return;
	}
	inorder(v[node - 65][0]);
	cout << node;
	inorder(v[node - 65][1]);
}

void postorder(char node) {
	if (node == '.') {
		return;
	}
	postorder(v[node - 65][0]);
	postorder(v[node - 65][1]);
	cout << node;
}

int main() {

	int N;
	cin >> N;

	v.resize(N + 1);

	char x1, x2, x3;
	for (int i = 0; i < N; i++) {
		cin >> x1 >> x2 >> x3;
		v[x1 - 65].push_back(x2);
		v[x1 - 65].push_back(x3);
	}

	preorder('A');
	cout << "\n";

	inorder('A');
	cout << "\n";

	postorder('A');
	cout << "\n";
}