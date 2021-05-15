#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, vector<vector<int>> results) {
    int answer = 0;
    vector<vector<bool>> v(n+1, vector<bool>(n+1,false));

    for (int i = 0; i < results.size(); i++) {
        v[results[i][0]][results[i][1]] = true;      
    }

    //Floyd Warshall 플로이드 와샬 알고리즘 
    for (int k = 1; k <= n; k++) { //경유지
        for (int i = 1; i <= n; i++) { //시작점
            for (int j = 1; j <= n; j++) { //끝점
                if (v[i][k] && v[k][j]) {
                    v[i][j] = true;
                }    
            }
        }
    }

    int temp = 0;
    for (int i = 1; i <= n; i++) {
        temp = 0;
        for (int j = 1; j <= n; j++) {
            if (v[i][j] || v[j][i]) {
                temp++;
            }
        }
        if (temp == n - 1) {
            answer++;
        }
    }

    return answer;
}

int main() {

    cout << solution(5, {{4, 3}, {4, 2}, {3, 2}, {1, 2}, {2, 5}} );

    return 0;
}