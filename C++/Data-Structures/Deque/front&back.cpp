#include <iostream>
#include <deque>

using namespace std;

int main ()
{
  deque<int> dq;

  dq.push_front(77);
  dq.push_back(20);

  cout << "FRONT: " << dq.front() << endl;
  cout << "BACK: " << dq.back() << endl; 

  return 0;
}