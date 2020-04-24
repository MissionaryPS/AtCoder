#include <iostream>

void funcA() {
	int a[] = { 1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51 };
	int k;
	std::cin >> k;
	std::cout << a[k];
}

void funcB() {
	long long int H, W, sum;
	std::cin >> H >> W;
	if (H == 1 || W == 1) sum = 1;
	else {
		sum = H * W / 2;
		if ((H*W) % 2 != 0) sum += 1;
	}
	std::cout << sum;
}

void funcC() {
	long long int a, b, c;
	std::cin >> a >> b >> c;
	if (a + b < c) {
		std::cout << "No";
		return;
	}
	std::cout << (4 * a * b < (c-a-b)*(c-a-b) ? "Yes" : "No");
}

int main(void) {
	funcC();
	return 0;
}