/***
 * Read name and say hello.
 * using 2 method, one is string,the other is char array.
 */
#include <iostream>
#include <cstring>

using namespace std;
#define MAX_LEN 1024
void hello_1() {
    string username;
    cin  >> username;
    if (username.length() <= 2) {
        cerr << "name must longer than 2 characters\n";
    }
    else {
        cout << "Hello " << username << endl;
    }
}

void hello_2() {
    char name[MAX_LEN];
    cin >> name;
    if (strlen(name) <= 2) {
        cerr << "name must longer than 2 characters\n";
    }
    else {
        cout << "Hello " << name << endl;
    }
}
int main() {
    cout << "What is your name?\n";
    hello_1();
    hello_2();
    return 0;
}
