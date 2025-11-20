//frequency of each digit
#include <iostream>
using namespace std;

int main() {
    long long num;
    int freq[10] = {0};  

    cout << "Enter a number: ";
    cin >> num;

    long long temp = num;

    while (temp != 0) {
        int digit = temp % 10;  
        freq[digit]++;          
        temp /= 10;             
    }

    cout << "\nFrequency of each digit:\n";
    for (int i = 0; i < 10; i++) {
        cout << i << " → " << freq[i] << endl;
    }

    return 0;
}
