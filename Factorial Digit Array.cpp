#include <iostream>
#include <vector>
using namespace std;

vector<int> factorialDigits(int n) {
    vector<int> res;
    res.push_back(1);

    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int j = 0; j < res.size(); j++) {
            int prod = res[j] * i + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }
    return res;
}

int main() {
    int n = 5; // 5! = 120
    vector<int> result = factorialDigits(n);
    cout << n << "! = ";
    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i];
    return 0;
}

