#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	string str;
	cin >> str;

	int t;
	cin >> t;
	
	stack<char> left, right;
	
	for(int i = 0; i < str.size(); i++){
		left.push(str[i]);
	}
	
	while(t--){
		char command;
		cin >> command;
		
		if(command == 'L'){
			if(!left.empty()){
				right.push(left.top());
				left.pop();
			}
		}
		if(command == 'D'){
			if(!right.empty()){
				left.push(right.top());
				right.pop();
			}
		}
		if(command == 'B'){
			if(!left.empty())
				left.pop();
		}
		if(command == 'P'){
			char ch;
			cin >> ch;
			left.push(ch);
		}
	}
	
	while(!left.empty()){
		right.push(left.top());
		left.pop();
	}
	
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
	
	return 0;
}
