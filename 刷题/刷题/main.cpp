#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() {
	long long n, a;
	while (~scanf("%lld", &n)) {
		for (int i = 2; i * i <= n; i++)
		if (n % i == 0) {
			printf("%lld\n", n / i);
			break;
		}
	}
	return 0;
}
