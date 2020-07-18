// 15656 - N과 M(7)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, v[10001], p, v3[9];
vector<int> v2;
void dfs(int a, int b) {
	if (b == m) { //출력
		for (int j = 0; j < v2.size(); cout << v2[j] << " ", j++);
		cout << "\n";
	}
	else {
		for (int i = 0; i < n; i++) {
				v2.push_back(v3[i]);
				dfs(i + 1, b + 1);
				v2.pop_back();
		}
	}
}
int main() {
	for (cin >> n >> m; p < n; cin >> v3[p++]);
	sort(v3, v3 + n);
	dfs(0, 0);
}