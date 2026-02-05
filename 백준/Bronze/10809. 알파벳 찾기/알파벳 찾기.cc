#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	vector<tuple<int, int>> a(26);
	for (int i = 0; i< 26; i++) {
		get<0>(a[i]) = -1;
		get<1>(a[i]) = 0;
	}
	
	for (int i = 0; i < s.length(); i++) {
		int idx = s[i] - 'a';
		if(get<1>(a[idx]) == 0){
			get<0>(a[idx]) = i;
			get<1>(a[idx]) = 1;
		}
	}
	
	for (int i = 0; i< 26; i++) {
		cout << get<0>(a[i]) << (i == 25 ? '\n' : ' ');
	}
	return 0;
}
