#include <iostream>
using namespace std;

long long int tiling_walkway(int data) {
	if (data <= 2) return data;
	
	long long int arr[data + 1];
	arr[1] = 1;
	arr[2] = 2;
	
	for (int i = 3; i <= data; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[data];
}

int main() {
	int data;
	cin >> data;
	cout << tiling_walkway(data);
	return 0;
}