#include <iostream>

using namespace std;

int N, S, sum, cnt = 0;
int list[20];

void dfs(int i, int sum) {
	if (i == N) return;
	if (sum + list[i] == S) cnt++;

	dfs(i + 1, sum);
	dfs(i + 1, sum + list[i]);
}

int main() {
	cin >> N >> S;
	for (int i = 0; i < N; i++)
		cin >> list[i];

	dfs(0, 0);

	cout << cnt;
}