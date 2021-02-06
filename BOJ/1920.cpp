#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    cin >> M;

    int input, l, r, mid;
    l = 0;
    r = A.size();

    for (int i = 0; i < M; i++) {
        l = 0;
        r = A.size();
        cin >> input;
        while (true)
        {
            mid = (l + r) / 2;
            if (A[mid] == input) {
                cout << "1" << '\n';
                break;
            }
            else if (A[mid] > input) {
                r = mid - 1;
            }
            else if (A[mid] < input) {
                l = mid + 1;
            }

            if (l > r) {
                cout << "0" << '\n';
                break;
            }
        }

    }

    return 0;
}