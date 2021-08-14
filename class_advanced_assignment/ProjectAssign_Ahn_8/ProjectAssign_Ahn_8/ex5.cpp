#include <iostream>
using namespace std;

class BaseArray {
    int capacity; // 배열의 크기
    int* mem; // 정수 배열을 만들기 위한 메모리의 포인터
protected: // 생성자가 protected 
    BaseArray(int capacity = 100) {
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

//basearray클래스를 상속받아 스택으로 작동하는 mystack 클래스를 작성
class MyQueue : public BaseArray {
    int front = 0;
    int rear = 0;
public:
    MyQueue(int capacity) : BaseArray(capacity) { ; }
    void enqueue(int n) {
        if (rear >= getCapacity()) {
            cout << "Queue is full...\n";
            exit(1);
        }
        rear++;
        put(rear, n);
    }
    int capacity() {
        return getCapacity();
    }
    int length() {
        return rear;
    }
    int dequeue() {
        if (rear < 0) {
            cout << "Queue is empty...\n";
            exit(1);
        }
        ++front;
        rear--;
        return get(front);
    }
};

int main() {
    MyQueue mStack(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mStack.enqueue(n); // 큐에 삽입 
    }
    cout << "큐의 용량:" << mStack.capacity() << ", 큐의 크기:" << mStack.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while (mStack.length() != 0) {
        cout << mStack.dequeue() << ' '; // 큐에서 제거하여 출력 
    }
    cout << endl << "큐의 현재 크기 : " << mStack.length() << endl;
}
