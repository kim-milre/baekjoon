#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	
	while(t--){
		int k = 0;
		string s;
		cin >> k >> s;
		
		for(char c : s)
			for(int i = 0; i < k; i++)
				cout << c;
		cout << endl;
	}
	
	return 0;
}
