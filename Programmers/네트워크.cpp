#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> v;
vector<bool> visited;

void dfs(int node) {
    visited[node] = true;
    for (int i = 0; i < v[node].size(); ++i) {
        if (visited[v[node][i]]) continue;
        dfs(v[node][i]);
    }
}


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
  
    v.resize(n);
    visited.resize(n);

    for (int i = 0; i < computers.size(); i++) {
        for (int j = 0; j < computers[i].size(); j++) {
            if (j != i && computers[i][j] != 0) {
                v[i].push_back(j);
            }
        }
    }    

    for (int i = 0; i < n; i++) {
        if (!visited[i]) { //방문 안했을 시 dfs로 탐색
            dfs(i);
            answer++;
        }
    }

    return answer;
}

int main() {

    cout << solution(3, {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}} );
}