#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	queue<int> q;
	for(int i = 1; i <= n; i++){
		q.push(i);
	}
	
	printf("<");
	for(int j = 0; j < n - 1; j ++){
		for(int k = 0; k < m - 1; k++){
			q.push(q.front());
			q.pop();
		}
		
		printf("%d, ", q.front());
		q.pop();
	}
	printf("%d>", q.front());
	
	
	
	return 0;
}
