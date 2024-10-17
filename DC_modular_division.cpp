#include <iostream>
#include <cmath>
using namespace std;

struct Modular {
    long int g;  
    long int s;  
    long int t;  
};

struct Modular Ex_GCD(long int a, long int b) {
    if (b == 0) {
        return {a, 1, 0};  
    }
    struct Modular prime = Ex_GCD(b, a % b);
    long int s = prime.t;
    long int t = prime.s - (floor(a / b)) * prime.t;
    return {prime.g, s, t};
}

int main() {
    int a, b, n;
    cin >> a >> b >> n; 
    struct Modular div = Ex_GCD(n, b);
    if (div.t < 0) 
        div.t += n; 
    long int result = (a * div.t) % n;
    cout << result;
    return 0;
}
