#include <iostream>
using namespace std;

int main() {
    string inp, neo;
    cin >> inp;
    
    for (int i = 0; i < inp.length(); i++) {
        char current = tolower(inp[i]);
        if (current != 'a' && current != 'e' && current != 'i' && current != 'o' && current != 'u' && current != 'y') {
            neo += '.';
            neo += current;
        }
    }
    
    cout << neo << '\n';
    return 0;
}