#include<iostream>
using namespace std;
int main() {
    int i, n;
int result = 1;

cin >> n;

for(i = n; i >= 1; i--) {
    result = result * i;
}

cout << result;
    return 0;
}