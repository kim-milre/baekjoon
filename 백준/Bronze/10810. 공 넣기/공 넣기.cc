#include <iostream>
#include <string>
#include <stack>
using namespace std;
void print(stack<char> &s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
int main() {
	int N = 0, M = 0;
	int i = 0, j = 0, k = 0;
	cin >> N >> M;
	while(N < 1 || N > 100 || M < 1 || M > 100){
		cout << "enter N, M between 1 ~ 100" <<endl;
		cin >> N >> M;
	}

	int array[N];
	fill_n(array, N, 0);
	
	for(int h = 0; h < M; h++){
		cin >> i >> j >> k;
		fill(array + i -1, array+j, k);
	}
	for(int i = 0; i < N; i++)
		cout << array[i] <<" ";
	cout << endl;
	return 0;
}
