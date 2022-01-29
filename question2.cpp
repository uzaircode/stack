#include <iostream>

using namespace std;

class Stack {
private :
    int stack[10];
    int top;

public:
    Stack() {
        top = -1;
    }

    int full() {
        if (top == 10)
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

    void push(int alpha) {
        if (!full()) {
            top++;
            stack[top] = alpha;
        } else
            cout << "Stack is full.";
    }

    int pop() {
        int alpha;
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
    int alpha, even = 0, odd = 0;

    cout << "Key in 10 numbers : ";
    for (int i = 0; i < 10; i++) {
        cin >> alpha;
        if (alpha % 2 == 0)
            even++;
        else
            odd++;
        st.push(alpha);
    }

    cout << "Numbers entered are : ";
    while (!st.empty()) {
        cout << st.pop() << " ";
    }
    cout << "\nThere are " << even << " even numbers and " << odd << " odd numbers";

    return 0;
}
