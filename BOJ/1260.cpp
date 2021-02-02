#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, M, V;
vector<vector<int>> vec(1001);
vector<int> visit(1001, 0);

int DFS(int vertex) {

	visit[vertex] = 1; 
	int index = vertex;

	cout << vertex << " ";

	int i = 0;
	while (i < vec[index].size()) {
		if (visit[vec[index][i]] != 1) {
			DFS(vec[index][i]);	
		}
		i++;	
	}

	return 0;
}

int BFS(int vertex) {

	vector<int> visit(1001, 0);
	queue<int> q;
	int index;

	q.push(vertex);
	visit[vertex] = 1;

	while (!q.empty())
	{
		index = q.front();
		int i = 0;
		while(i<vec[index].size()){
			if (visit[vec[index][i]] != 1) {
				q.push(vec[index][i]);
				visit[vec[index][i]] = 1;
			}			
			i++;
		}
		cout << q.front() << " ";		
		q.pop();
	}

	return 0;
}

int main() {

	int first, second;

	cin >> N >> M >> V;	

	for (int i = 0; i < M; i++) {
		cin >> first >> second;
		vec[first].push_back(second);
		vec[second].push_back(first);
	}

	for (int i = 1; i <= N; i++) {
		sort(vec[i].begin(), vec[i].end());
	}

	DFS(V);
	cout << '\n';
	BFS(V);


	return 0; 
}