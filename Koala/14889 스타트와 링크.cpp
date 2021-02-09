#include <iostream>
#include <algorithm>

using namespace std;

int N, ans = 0;
int S[20][20];
bool check[20];

void func(int cnt, int idx) {
	if (idx == N) return;

	if (cnt == N / 2) {
		int s1 = 0, s2 = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (check[i] && check[j]) s1 += S[i][j];
				else if (!check[i] && !check[j]) s2 += S[i][j];
			}
		}
		ans = min(ans, abs(s1 - s2));
		return;
	}
	c[idx] = true;
	func(cnt + 1, idx + 1);
	c[idx] = false;
	func(cnt, idx + 1);
}

int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> S[i][j];
	}

	func(0, 0);

	cout << ans;
}