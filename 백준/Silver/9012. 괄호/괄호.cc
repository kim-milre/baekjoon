#include <iostream>
#include <string>

using namespace std;

string valid(string s){
	int cnt = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '('){
			cnt += 1;
		}else
			cnt -= 1;
		if(cnt < 0){
			return "NO";
		}
	}
	if(cnt == 0) return "YES";
	else return "NO";
}

int main(){
	
	int t = 0;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		cout << valid(str) << endl;
	}
		
	return 0;
}
