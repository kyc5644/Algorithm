#include <iostream>

using namespace std;

int main() {
	int N;
	char picture[5][7][50];
	int num1 = 0, num2 = 0;
	int cnt, max = 10000;

	cin >> N;

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 7; j++) {
				cin >> picture[i][j][k];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			cnt = 0;
			for (int p = 0; p < 5; p++) {
				for (int q = 0; q < 7; q++) {
					if (picture[p][q][i] != picture[p][q][j])
						cnt++;
					if (cnt > max) break;
				}
			}
			if (cnt < max) {
				max = cnt;
				num1 = i + 1;
				num2 = j + 1;
			}
		}
	}

	cout << num1 << " " << num2;

}
