#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter N: ";
    cin >> N;

    cout << "Numbers divisible by 3 between 1 and " << N << " are:\n";

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
