/*
Push elements into a stack and print the size of the stack.
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack size: " << s.size() << endl;
    return 0;
}
