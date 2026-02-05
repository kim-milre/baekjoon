#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	vector<int> pos(26, -1);
	
	for(int i = 0; i < s.length(); i++){
		int idx = s[i] - 'a';
		if(pos[idx] == -1)
			pos[idx] = i;
	}
	
	for (int i = 0; i< 26; i++) {
		cout << pos[i] << (i == 25 ? '\n' : ' ');
	}
	return 0;
}
