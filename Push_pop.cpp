#include <iostream>
#include <stack>

int main() {
    // Create an empty stack
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element of the stack
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Pop elements from the stack
    myStack.pop();
    std::cout << "Popped one element." << std::endl;

    // Print the top element again
    std::cout << "Top element after pop: " << myStack.top() << std::endl;

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Get the size of the stack
    std::cout << "Stack size: " << myStack.size() << std::endl;

    return 0;
}
