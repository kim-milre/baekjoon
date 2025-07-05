#include <cmath>
#include <vector>
#include <iostream>

int main(){
	float m=0;
	float averge=0;
	float max=0;
	
	std::vector<float> score(1000);
	std::cin >> m;
	for (int i=0; i<m; i++) {
		std::cin >> score[i];
		if (score[i] > max) {
			max = score[i];
		}
	}
	for (int i=0; i<m; i++) {
		score[i] = score[i] / max * 100.0f;
		averge += score[i];
	}
	averge = averge / m;
	std::cout << averge << std::endl;
	return 0;
}