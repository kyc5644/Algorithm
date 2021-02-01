#include <iostream>

using namespace std;

int main() {
	int N, n;
	int Min, min;
	int temp = 0;
	int digits = 0;

	cin >> N;

	n = N;
	while (n != 0) {
		n /= 10;
		digits++;
	}

	for (Min = N - (9 * digits); Min < N; Min++) {
		min = Min;
		while (min != 0) {
			temp += min % 10;
			min /= 10;
		}
		if (temp + Min == N) {
			cout << Min;
			break;
		}
		temp = 0;
	}
	if (Min == N) {
		cout << 0;
	}
}