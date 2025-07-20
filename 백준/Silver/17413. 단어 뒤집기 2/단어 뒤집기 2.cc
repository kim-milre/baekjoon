#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	getline(cin, str);
	stack<char> s;
	bool inTag = false;

	for(char ch : str){
		if(ch == '<'){
			while(!s.empty()){
				cout << s.top();
				s.pop();
			}
			inTag = true;
			cout << ch;
		}
		else if(ch == '>'){
			inTag = false;
			cout << ch;
		}
		else if(ch == ' ' || ch == '\n'){
			while(!s.empty()){
				cout << s.top();
				s.pop();
			}
			cout << ch;
		}
		else if (inTag) {
			cout << ch;
		}
		else{
			s.push(ch);
		}
	}
	while (!s.empty()) {
			cout << s.top();
			s.pop();
		}
			
	return 0;
}
