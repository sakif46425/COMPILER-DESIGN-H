#include<bits/stdc++.h>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    if (iswalnum(a)) {
        cout << "The  1st character is alphanumeric" << endl;
    } else {
        cout << "The 1st  character is not alphanumeric" << endl;
    }

    if (iswalnum(b)) {
        cout << "The 2nd character is alphanumeric" << endl;
    } else {
        cout << "The  2nd character is not alphanumeric" << endl;
    }

    return 0;
}
