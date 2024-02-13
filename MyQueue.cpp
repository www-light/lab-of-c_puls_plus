#include<iostream>
using namespace std;

template <typename T> class MyQueue;
template <typename T> std::ostream& operator<<(std::ostream&, const MyQueue<T>&);

template <typename T>
class QueueItem
{
public:
    QueueItem(const T& t) :item(t), next(0)
    {}//复制构造函数
private:
    T item; //value stored in this element
    QueueItem* next; // pointer to next element in the MyQueue

    friend class MyQueue<T>;//友元类
    //通过友元函数重载<<运算符模板函数，要写上<<后的<Type>
    friend ostream& operator<< <T> (ostream& os, const MyQueue<T>& q);
};

template <typename T>
class MyQueue
{
public:
    MyQueue() : head(0), tail(0) {} // Empty MyQueue

    MyQueue(const MyQueue& Q) //拷贝构造函数
        :head(0), tail(0)
    {
        CopyElements(Q);
    };

    ~MyQueue() { Destroy(); }

    MyQueue& operator=(const MyQueue&);

    // return element from head of MyQueue
    T& Front() { return head->item; }
    const T& Front() const { return head->item; }
    void Push(const T&); //add element to back of MyQueue
    void Pop(); // remove element from head of MyQueue
    bool Empty() const { return head == 0; }
    void Display() const;
private:
    QueueItem<T>* head;
    QueueItem<T>* tail;
    void Destroy(); //delete all the elements
    void CopyElements(const MyQueue&);

    //设置友元函数
    friend ostream& operator<< <T> (ostream& os, const MyQueue<T>& q);
};

template <typename T>
MyQueue<T>& MyQueue<T>::operator=(const MyQueue& Q) {
    if (this != &Q) {
        Destroy();
        CopyElements(Q);
    }
    return *this;
}

template <typename T>
void MyQueue<T>::Push(const T& t) {
    QueueItem<T>* p = new QueueItem<T>(t);
    if (Empty()) {
        head = tail = p;
        return;
    }
    tail->next = p;
    tail = p;//从队尾插入
}

template <typename T>
void MyQueue<T>::Pop() {
    if (head) {
        QueueItem<T>* p = head;
        head = head->next;//删除最前面的元素
        delete p;
        if (!head) tail = 0;
    }
}

template <typename T>
void MyQueue<T>::Display() const {
    QueueItem<T>* q = head;
    while (q) {
        cout << q->item << " ";
        q = q->next;
    }
}

template <typename T>
void MyQueue<T>::Destroy() {
    while (!Empty()) Pop();
}

template <typename T>
void MyQueue<T>::CopyElements(const MyQueue& Q) {
    QueueItem<T>* p = Q.head;
    while (p) {
        Push(p->item);
        p = p->next;
    }
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const MyQueue<T>& q) {
    QueueItem<T>* p = q.head;
    os << "< ";
    while (p) {
        os << p->item << " ";
        p = p->next;
    }
    os << ">";
    return os;
}
int main()
{
    MyQueue<int> qi;
    qi.Push(1);
    qi.Push(2);
    qi.Push(3);
    qi.Push(4);
    qi.Push(5);
    qi.Pop();
    qi.Display();
    cout << "\n";
    cout << qi;
    cout << endl;

    MyQueue<int> qi2(qi);
    qi2.Display();
    cout << endl;

    MyQueue<int> qi3;
    qi3 = qi;
    cout << qi3;

    return 0;
}