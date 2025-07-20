#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
	int num, in;
	string str;
	deque<int> d;
	
	cin >> num;
	while(num--){
		cin >> str;
		if(str == "push_front"){
			cin >> in;
			d.push_front(in);
			
		}
		else if(str == "push_back"){
			cin >> in;
			d.push_back(in);
		}
		else if(str == "pop_front"){
			if(d.empty())
				cout << -1 << endl;
			else{
				cout << d.front() << endl;
				d.pop_front();
			}
		}
		else if(str == "pop_back"){
			if(d.empty())
				cout << -1 << endl;
			else{
				cout << d.back() << endl;
				d.pop_back();
			}
		}
		else if(str == "size"){
			cout << d.size() << endl;
		}
		else if(str == "empty"){
			cout << d.empty() << endl;
		}
		else if(str == "front"){
			if(d.empty())
				cout << "-1" << endl;
			else
				cout << d.front() << endl;
		}
		else if(str == "back"){
			if(d.empty())
				cout << "-1" << endl;
			else
				cout << d.back() << endl;
		}
	}
	return 0;
}
