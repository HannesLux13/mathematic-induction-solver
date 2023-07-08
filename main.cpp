#include <iostream>

using namespace std;

// Function to check if a statement is true for a given value of n
bool isStatementTrue(int n) {
    // Replace this with your own mathematical statement
    // Here's an example: checking if the statement "1 + 2 + ... + n = n * (n + 1) / 2" is true
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    int formulaResult = n * (n + 1) / 2;

    return sum == formulaResult;
}

int main() {
    int n;

    // Input the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Check if the statement is true for the given value of n
    if (isStatementTrue(n)) {
        cout << "The statement is true for n = " << n << endl;
    } else {
        cout << "The statement is false for n = " << n << endl;
    }

    return 0;
}
