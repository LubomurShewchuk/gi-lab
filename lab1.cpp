#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
     cout << "Enter number: ";
     cin >> n;
    for (int i = 0; i < n; i++) {
        cout << setw(n - i + 1);
        for (int j = 0; j <= i; j++) {
            cout << j;
        }
        for (int j = 0; j < i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
