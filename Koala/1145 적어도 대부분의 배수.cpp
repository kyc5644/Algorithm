#include <iostream>

using namespace std;

int main() {
	int num[5];
	int n = 1, cnt;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	while (1) {
		cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (n >= num[i] && n % num[i] == 0) {
				cnt++;
			}
		}
		if (cnt >= 3) {
			cout << n;
			break;
		}
		n++;
	}
}
