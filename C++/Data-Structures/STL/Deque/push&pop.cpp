#include <iostream>
#include <deque>

using namespace std;

void print_forward(deque<int> dq) {
    cout << "FORWARD PRINT: ";
    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
}

void print_reverse(deque<int> dq) {
    cout << "REVERSE PRINT: ";
    while (!dq.empty()) {
        cout << dq.back() << " ";
        dq.pop_back();
    }
    cout << endl;
}

int main () {
    deque<int> dq_for;
    deque<int> dq_rev;

    dq_for.push_front(77);
    dq_for.push_front(20);
    dq_for.push_front(10);
    dq_for.push_front(550);
    dq_for.push_back(999);
    dq_for.push_back(444);
    dq_for.push_back(222);

    print_forward(dq_for);

    dq_rev.push_front(77);
    dq_rev.push_front(20);
    dq_rev.push_front(10);
    dq_rev.push_front(550);
    dq_rev.push_back(999);
    dq_rev.push_back(444);
    dq_rev.push_back(222);

    print_reverse(dq_rev);

    return 0;
}