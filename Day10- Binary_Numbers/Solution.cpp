#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int max = 0;

    while (n > 0) {
        if (n % 2 == 1) {

            count++;

            if (count > max) max = count;

        } else count = 0;

        n = n / 2;
    }

    cout << max;

    return 0;
}
