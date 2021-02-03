#include <iostream>

using namespace std;

int main() {
	int list[16] = { 0, };
	int doubles[100] = { 0, };
	int cnt = 0;
	int i = 0;
	int p = 0;

	while (1) {
		cin >> list[i];
		if (list[i] == 0) {
			list[i] = '\0';
			for (int j = 0; j < i; j++) {
				for (int k = 0; k < i; k++) {
					if (2 * list[j] == list[k]) {
						cnt++;
					}
				}
			}
			doubles[p] = cnt;
			cnt = 0;
			p++;
			i = -1;
		}
		else if (list[i] == -1) {
			break;
		}
		i++;
	}

	for (int i = 0; i < p; i++) {
		cout << doubles[i] << endl;
	}
}