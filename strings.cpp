#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    cin >> a >> b;

    // Step 1: Length print
    cout << a.length() << " " << b.length() << endl;

    // Step 2: Concatenate
    cout << a + b << endl;

    // Step 3: First character swap
    swap(a[0], b[0]);

    cout << a << " " << b;

  
    return 0;
}
