#include <iostream>

using namespace std;

class Stack {
private :
    char stack[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    int full() {
        if (top == 4)
            return 1;
        else
            return 0;
    }


    int empty() {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    void push(char alpha) {
        if (!full()) {
            top++;
            stack[top] = alpha;
        } else
            cout << "Stack is full.";
    }

    char pop() {
        char alpha;
        if (!empty()) {
            alpha = stack[top];
            top--;
            return alpha;
        } else
            cout << "Stack is empty.";
    }
};

int main() {
    Stack st;
    char alpha;

    cout << "Key in five characters : ";
    for (int i = 0; i < 5; i++) {
        cin >> alpha;
        st.push(alpha);
    }

    cout << "\nThe reverse order : ";
    while(!st.empty())
    {
        cout << st.pop() << " ";
    }

    return 0;
}
