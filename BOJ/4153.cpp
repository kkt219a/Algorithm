// 4153-직각삼각형
#include<iostream>
#include<algorithm>
using namespace std;
int a[3];
int main() {
	while (1) {
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;
		sort(a, a+3);
		if (a[2] * a[2] == a[1] * a[1] + a[0] * a[0])
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}