//LIFO

#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> stacy) {
    cout << "STACK SIZE: " << stacy.size() << endl;
    cout << "STACK: ";
    while (!stacy.empty()) {
        cout << stacy.top() << " ";
        stacy.pop();
    }
    cout << endl;
}

int main() {

    stack<int> stacy;

    for (int i = 0; i < 5; i++) {
        stacy.push(i*100);
    }

    printStack(stacy);

    return 0;
}