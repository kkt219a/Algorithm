// 10870 - 피보나치 수 5

#include<iostream>
int f(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return f(n - 1) + f(n - 2);
}
int n;
int main() {
	std::cin >> n;
	std::cout << f(n);
}