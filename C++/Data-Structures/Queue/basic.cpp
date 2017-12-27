//FIFO
//like a line at a grocery store

/*

empty
size
front
back
push
pop

*/

#include <iostream>
#include <queue>

using namespace std;

void printQueueForward(queue<int> q) {
    cout << "Q SIZE: " << q.size() << endl;
    cout << "QUEUE: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void printQueueBackwards(queue<int> q) {
    cout << "QUEUE: ";
    while (!q.empty()) {
        cout << q.back() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> que;

    for (int i = 0; i < 5; i++) {
        que.push(i*100);
    }

    printQueueForward(que);

    //wont work, because the back of the Queue is constant
    //for this we would need a double sided queue, AKA a Deque
    printQueueBackwards(que);

    return 0;
}