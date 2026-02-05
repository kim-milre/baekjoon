#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int k = 0;
		string s;
		
		cin >> k;
		cin.ignore();
		getline(cin, s);
		
		for(int j = 0; j < s.length(); j++)
			for(int h = 0; h < k; h++)
				cout << s[j];
		cout << endl;
	}
	cout << endl;
	return 0;
}
