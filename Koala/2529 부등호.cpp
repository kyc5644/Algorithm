#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int k;
char sign[11];
int num[11];
bool ch[11];
vector<string> ans;
string maxNum, minNum;

bool signCheck(char a, char b, char oper) {
	if (oper == '<') {
		if (a > b) return false;
	}
	else {
		if (a < b) return false;
	}
	return true;
}

void Combination(int index, string num) {
	if (index == (k + 1)) {
		ans.push_back(num);
		return;
	}

	for (int i = 0; i < 10; i++) {
		if (ch[i]) continue;
		if (index == 0 || signCheck(num[index - 1], i + '0', sign[index - 1])) {
			ch[i] = true;
			Combination(index + 1, num + to_string(i));
			ch[i] = false;
		}
	}
}

int main() {
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> sign[i];
	}
	Combination(0, "");
	sort(ans.begin(), ans.end());
	cout << ans[ans.size() - 1] << endl;
	cout << ans[0];

}
