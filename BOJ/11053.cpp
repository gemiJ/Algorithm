#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;

    cin >> n;

    vector<int> v(n);
    vector<int> res(n,1);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    //res[n]은 n번째 숫자가 수열의 마지막에 들어갈 때
    //가장 긴 증가하는 부분수열 길이를 저장

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] < v[j] && res[j] < res[i] + 1){
                res[j] = res[i] + 1;
            }
        }
    }

    cout << *max_element(res.begin(), res.end());

    return 0;
}