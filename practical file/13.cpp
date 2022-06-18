#include <iostream>
#include <string>
using namespace std;
template <class T>
class Stack
{
public:
    int top;
    T st[100];
    Stack()
    {
        top = -1;
    }
    void push(T i)
    {
        st[++top] = i;
    }
    T pop()
    {
        return st[top--];
    }
};

int main()
{
    Stack<int> int_stack;
    Stack<string> str_stack;
    int_stack.push(67);                     // Your Roll no. goes here
    str_stack.push("Hello");
    str_stack.push("Codezclub");            // Your Name goes here
    cout << int_stack.pop() << endl;
    cout << str_stack.pop() << endl;
    cout << str_stack.pop() << endl;
    return 0;
}