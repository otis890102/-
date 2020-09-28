#include <iostream>

using namespace std;

int main() {

    int no, i, c;

    cout << "> 輸入一正整數 : ";
    cin >> no;

    cout << no << " = ";

    i = 2;
    while (i <= no) {

        c = 0;
        while (no % i == 0) {
            no /= i;
            ++c;
     
         }

        if (c > 0) {
            cout << i;
            if (c > 1) cout << "^" << c;
            if (no > 1) cout << " * ";
        }

        (i >= 3) ? (i += 2) : ++i;

    }

    cout << endl;

    return 0;

}