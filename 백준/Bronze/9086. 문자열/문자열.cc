#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int T = 0;
	cin >> T;
	cin.ignore();
	
	vector<string> a(T);
	for(int i = 0; i < T; i++){
		getline(cin, a[i]);
		cout << a[i].front() << a[i].back() << endl;
	}
	return 0;
}
