#include <iostream>
#include <queue>

int main() {
    // Creating a queue
    std::queue<int> myQueue;

    // Adding elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Displaying elements in the queue
    std::cout << "Elements in the queue: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }

    return 0;
}
