#include <string>
#include <vector>
#include <map>
#include <utility>
#include <cmath>
#include <iostream>

using namespace std;

string solution(vector<int> numbers, string hand) {
	string answer = "";
	map<int, pair<int,int>> m;
	m[1] = { 0,3 }; m[2] = { 1,3 }; m[3] = { 2,3 };
	m[4] = { 0,2 }; m[5] = { 1,2 }; m[6] = { 2,2 };
	m[7] = { 0,1 }; m[8] = { 1,1 }; m[9] = { 2,1 };
	m[10] = { 0,0 }; m[0] = { 1,0 }; m[11] = { 2,0 };
	int locL = 10;
	int locR = 11;

	for (int i = 0; i < numbers.size(); i++) {
		if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
			answer += "L";
			locL = numbers[i];
		}	
		else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
			answer += "R";
			locR = numbers[i];
		}
		else{
			int costL = abs(m.find(numbers[i])->second.first - m.find(locL)->second.first)
						+ abs(m.find(numbers[i])->second.second - m.find(locL)->second.second);

			int costR = abs(m.find(numbers[i])->second.first - m.find(locR)->second.first)
						+ abs(m.find(numbers[i])->second.second - m.find(locR)->second.second);

			if (costL > costR) {
				answer += "R";
				locR = numbers[i];
			}
			else if(costL<costR){
				answer += "L";
				locL = numbers[i];
			}
			else if (costL == costR) {
				if (hand == "right") {
					answer += "R";
					locR = numbers[i];
				}
				else {
					answer += "L";
					locL = numbers[i];
				}
			}			
		}
	}

	return answer;
}

int main() {

	cout << solution({ 7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2 },"left");

	return 0;
}