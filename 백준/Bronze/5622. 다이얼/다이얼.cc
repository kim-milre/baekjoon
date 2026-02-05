#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	cin >> a;
	
	int time = 0;
	for(int i = 0; i < a.length(); i++){
		int x = a[i] - 'A';
		if(x < 15) time += x/3 + 3;
		else if(x < 19) time += 8;
		else if(x < 22) time += 9;
		else time += 10;
	}
	
	cout << time << endl;
	return 0;
}
