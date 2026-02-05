#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	istringstream ss(s);
	
	string word;
	int count = 0;
	
	while(ss >> word)
		count += 1;
	
	cout << count << endl;
	
	return 0;
}
