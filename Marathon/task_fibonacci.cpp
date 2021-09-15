#include <iostream>

int findFib(int a);

int main() {
	int nthFib;
	std::cin >> nthFib;
        std::cout << findFib(nthFib);
	return 0;
}		

int findFib(int a) {
	if(a <= 1) return 1;
	return findFib(a - 1) + findFib(a - 2);
	return 0;
}
