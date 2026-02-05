#include <iostream>
#include <string>

using namespace std;

int main() {
	int m = 0, sum = 0;
	cin >> m;
	cin.ignore();
	
	string s;
	getline(cin, s);
	
	for (int i = 0; i < m; i++) {
		sum += s[i] - '0';
	}
	
	cout << sum << endl;
	return 0;
}
