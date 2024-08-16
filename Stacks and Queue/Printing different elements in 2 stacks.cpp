#include <iostream>
#include <stack>

bool compareStacks(std::stack<int> stack1, std::stack<int> stack2) {
    if (stack1.size() != stack2.size()) {
        return false;
    }

    while (!stack1.empty()) {
        if (stack1.top() != stack2.top()) {
            return false;
        }
        stack1.pop();
        stack2.pop();
    }

    return true;
}

void printDifferentElements(std::stack<int> stack1, std::stack<int> stack2) {
    while (!stack1.empty()) {
        if (stack1.top() != stack2.top()) {
            std::cout << "Elements differ: " << stack1.top() << " and " << stack2.top() << std::endl;
        }
        stack1.pop();
        stack2.pop();
    }
}

int main() {
    std::stack<int> stack1, stack2;

    // Push elements to stack1
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    // Push elements to stack2
    stack2.push(1);
    stack2.push(4);
    stack2.push(3);

    if (compareStacks(stack1, stack2)) {
        std::cout << "Stacks are equal." << std::endl;
    } else {
        std::cout << "Stacks are not equal. Elements by which they differ:" << std::endl;
        printDifferentElements(stack1, stack2);
    }

    return 0;
}

