#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<long long> num;
vector<long long> numtemp;
vector<char> op;
vector<char> optemp;
vector<char> op_base = { '*', '-','+' };

long long answer = 0;

long long solution(string expression) {

	int index = 0;
	for (int i = 0; i < expression.size(); i++) {	
		if (expression[i] == '-' || expression[i] == '+' || expression[i] == '*') {
			num.push_back(stoi(expression.substr(index,i)));
			op.push_back(expression[i]);
			index = i + 1;
		}
	}
	num.push_back(stoi(expression.substr(index, expression.size()-1)));

	numtemp = num;

	long long res = 0;

	for (int i = 0; i < 6; i++) {
		next_permutation(op_base.begin(), op_base.end());
		numtemp = num;
		optemp = op;
		for (int j = 0; j < op_base.size(); j++) {
			for (int k = 0; k < optemp.size(); k++) {
				if (op_base[j] == optemp[k]) {
					switch (optemp[k]) {
						case '+':
							res = numtemp[k] + numtemp[k + 1];
							break;
						case '-':
							res = numtemp[k] - numtemp[k + 1];
							break;
						case '*':
							res = numtemp[k] * numtemp[k + 1];
							break;
					}
					numtemp[k] = res;
					numtemp.erase(numtemp.begin() + (k + 1));
					optemp.erase(optemp.begin() + k);
					k = -1;
				}
			}
		}
		


		if (abs(answer) < abs(numtemp[0])) {
			answer = abs(numtemp[0]);
		}
		numtemp = num;
		optemp = op;
	}

	return answer;
}

int main() {

	cout << solution("50*6-3*2");

}