#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
	vector<vector<int>> v(n+1);
	int answer = 0;
	int ta, tb;

	for (int i = 0; i < edge.size(); i++) {
		ta = edge[i][0];
		tb = edge[i][1];
		v[ta].push_back(tb);
		v[tb].push_back(ta);
	}

	vector<bool> visited(n + 1,false);
	vector<int> distance(n + 1,0);

	deque<int>dq;
	dq.push_back(1);
	visited[1] = true;
	distance[1]++;


	while (!dq.empty()) {
		int curNode = dq.front();
		dq.pop_front();
		
		for (int i = 0; i < v[curNode].size(); i++) {
			if (visited[v[curNode][i]]) continue;
			v[curNode][i];
			visited[v[curNode][i]] = true;

			distance[v[curNode][i]] = distance[curNode] + 1;
			dq.push_back(v[curNode][i]);
		}
	}

	int max = *max_element(distance.begin(), distance.end());

	for (int i = 0; i < distance.size(); i++) {
		if (max == distance[i]) {
			answer++;
		}
	}

	return answer;
}

int main() {

	cout << solution(6, {{3, 6}, {4, 3}, {3, 2}, {1, 3}, {1, 2}, {2, 4}, {5, 2}});
}