#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, M, result = 1;
	int rect[50][50];
	char temp;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> temp;
			rect[i][j] = temp - '0';
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 1; k <= max(N, M); k++) {
				int X = i + k, Y = j + k;
				if (X < N && Y < M &&
					rect[i][j] == rect[X][j] &&
					rect[X][j] == rect[i][Y] &&
					rect[i][Y] == rect[X][Y]) {
					if (result < k + 1)
						result = k + 1;
				}
			}
		}
	}

	cout << result * result;
}