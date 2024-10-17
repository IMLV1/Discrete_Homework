#include <iostream>
using namespace std;

int gridWalk(int N, int M){
    if (N == 0 || M == 0) {
    	return 1;
	}
	return gridWalk(N - 1, M) + gridWalk(N, M - 1);
}


int main() {
    int N, M;
    cin >> N >> M;
    cout << gridWalk(N, M) << endl;
    return 0;
} 
