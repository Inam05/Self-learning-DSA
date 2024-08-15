/*
Check if a stack is empty before and after pushing elements.
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    s.push(5);
    cout << "Is stack empty after pushing an element? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}
