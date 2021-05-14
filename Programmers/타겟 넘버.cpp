#include <string>
#include <vector>
#include <iostream>
using namespace std;

int result=0;
int cnt = 0;

void DFS(vector<int> numbers, int index, int target, int result) {

    if(index == numbers.size()){
        if (result == target) {
            cnt++;         
        }
        return;
    }

    DFS(numbers, index+1, target, result + numbers[index]);
    DFS(numbers, index+1, target, result - numbers[index]);

}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    int index = 0;

    DFS(numbers, index, target, result);

    answer = cnt;

    return answer;
}

int main() {

    cout << solution({1, 1, 1, 1, 1},3);

    return 0;
}