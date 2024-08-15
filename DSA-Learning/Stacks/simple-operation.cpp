/*
Demonstrate basic stack operations including push, pop, and top.
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;
    return 0;
}
