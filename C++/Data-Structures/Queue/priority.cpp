/*

empty
size
top
push
pop

*/

//MAX HEAP

#include <iostream>
#include <queue>

using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(199);
    pq.push(7);
    pq.push(50);
    pq.push(120);
    pq.push(75);
    pq.push(20);

    cout << endl << "TOP: " << pq.top() << endl;

    cout << endl;
    cout << "P-Q SIZE: " << pq.size() << endl;
    cout << "P-QUEUE: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    cout << endl;
    

    return 0;
}