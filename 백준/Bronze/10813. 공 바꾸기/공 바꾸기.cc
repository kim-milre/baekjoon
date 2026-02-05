#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N = 0, M = 0;
	int j = 0, k = 0;
	cin >> N >> M;
	while(N < 1 || N > 100 || M < 1 || M > 100){
		cout << "enter N, M between 1 ~ 100" <<endl;
		cin >> N >> M;
	}

	std::vector<int> a(N, 0);
	for(int i = 0; i < N; i++)
		a.insert(a.begin() + i, i + 1);

	for(int n = 0; n < M; n++){
		cin >> j >> k;
		// j =2, k =3
		int tmp = a.at(j-1);
		a[j-1] = a[k-1];
		a[k-1] = tmp;
	}
	
	
	for(int idx = 0; idx < N; idx++)
		cout << a[idx] << (idx == N -1 ? '\n' : ' ');
	return 0;
}
