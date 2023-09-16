#include <iostream>
using namespace std;

int findGCD(int m, int n) {
    while (n != 0) {
        int tmp = n;
        n = m % n;
        m = tmp;
    }
    return m;
}

int main() {
    int m, n;
    cin >> m;
    cin >> n;

    if (m <= 0 || n <= 0) {
        cout << "Hay nhap so duong" << endl;
        return 1;
    }
    int gcd = findGCD(m, n);
    cout << gcd << endl;

    return 0;
}

