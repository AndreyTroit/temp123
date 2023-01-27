#include <iostream>

int ShowUp(int El, int n){
	if(n == 0){
		std::cout << El-n << std::endl;
		return 0;
	}
	std::cout << El-n << std::endl;
	n--;
	ShowUp(El, n);
	return 0;
}

int ShowD(int El, int n){
	if(n == 0){
		std::cout << El << std::endl;
		return 0;
	}
	std::cout << El << std::endl;
	n--;
	ShowD(El - 1, n);
	return 0;
}
int main(){
	int El = 5;
	int n = 5;
	ShowUp(El, n);
	El = 5;
	n = 5;
	ShowD(El, n);
	return 0;
}
