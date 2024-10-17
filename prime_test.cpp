#include <iostream>
bool isPrime (int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n ;i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main () {
	int n;
	std :: cin >> n;
	std :: cout << (isPrime (n) ? "YES" : "NO") << std :: endl;	
	return 0;
}
