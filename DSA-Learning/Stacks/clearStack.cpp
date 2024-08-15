/*
Push elements into a stack, then clear it and check if it's empty.
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Stack size before clearing: " << s.size() << endl;

    // Clear the stack
    while (!s.empty())
    {
        s.pop();
    }

    cout << "Stack size after clearing: " << s.size() << endl;
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}
