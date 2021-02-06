#include <iostream>

using namespace std;

int main() {
	int T, N, M;
	int cnt = 0, temp;
	int zero[20];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		for (int j = N; j <= M; j++) {
			temp = j;
			if (temp == 0)
				cnt++;
			while (temp > 0) {
				if (temp % 10 == 0)
					cnt++;
				temp /= 10;
			}
		}
		zero[i] = cnt;
		cnt = 0;
	}

	for (int i = 0; i < T; i++)
		cout << zero[i] << endl;
}