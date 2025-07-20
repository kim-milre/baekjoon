#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	queue<int> num;
	for(int i = 1; i <= n; i++){
		num.push(i);
	}
	
	int k;
	cin >> k;
	
	cout << "<";
	while(--n){
		for(int i = 0; i < k-1; i++){
			num.push(num.front());
			num.pop();
		}
		cout << num.front() << ", ";
		num.pop();
	}
	cout << num.front() << ">" << endl;
}
