#include <iostream>
#include <map>
#include <vector>
#define max_n 20
using namespace std;

int val[max_n + 5][max_n + 5];

int dfs(int i, int j, int n) {
    if (i + 1 == n) return val[i][j];
    int val1 = dfs(i + 1, j, n);
    int val2 = dfs(i + 1, j + 1, n);
    return (val1 > val2 ? val1 : val2) + val[i][j];
}

int main() {
    for (int i = 0; i < max_n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    cout << dfs(0, 0, max_n);
    return 0;
}
