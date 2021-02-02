#include <iostream>

using namespace std;

int main() {
	int A, B, C, N;
	int numA, numB, numC;
	int i, j, k;
	int output = 0;

	cin >> A >> B >> C >> N;

	for (i = 0; i < N / A + 1; i++) {
		for (j = 0; j < N / B + 1; j++) {
			for (k = 0; k < N / C + 1; k++) {
				numA = A * i;
				numB = B * j;
				numC = C * k;
				if (numA + numB + numC == N) {
					output = 1;
					break;
				}
			}
			if (output == 1) {
				break;
			}
		}
		if (output == 1) {
			break;
		}
	}
	cout << output;
}