#include <iostream>
template <typename T>
class Single_Linked_List {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& d = T{}, Node* n = nullptr) : data{ d }, next{ n } {}
    };

    Node* head;
    Node* tail;
    size_t num_items;

public:
    Single_Linked_List() : head{ nullptr }, tail{ nullptr }, num_items{ 0 } {}

    ~Single_Linked_List() {
        Node* p = head;
        while (p != nullptr) {
            Node* temp = p;
            p = p->next;
            delete temp;
        }
    }

    void push_front(const T& item) {
        head = new Node(item, head);
        if (num_items == 0) tail = head;
        ++num_items;
    }

    void push_back(const T& item) {
        Node* new_node = new Node(item, nullptr);
        if (num_items == 0) {
            head = tail = new_node;
        }
        else {
            tail->next = new_node;
            tail = new_node;
        }
        ++num_items;
    }

    bool empty() const {
        return num_items == 0;
    }

    T& front() {
        return head->data;
    }

    const T& front() const {
        return head->data;
    }

    T& back() {
        return tail->data;
    }

    const T& back() const {
        return tail->data;
    }

    void pop_front() {
        if (num_items > 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            --num_items;
            if (num_items == 0) tail = nullptr;
        }
    }

    void pop_back() {
        if (num_items > 0) {
            if (num_items == 1) {
                delete head;
                head = tail = nullptr;
            }
            else {
                Node* p = head;
                while (p->next != tail) p = p->next;
                delete tail;
                tail = p;
                tail->next = nullptr;
            }
            --num_items;
        }
    }

    void insert(size_t index, const T& item) {
        if (index == 0) push_front(item);
        else if (index >= num_items) push_back(item);
        else {
            Node* p = head;
            for (size_t i = 0; i < index - 1; ++i) p = p->next;
            p->next = new Node(item, p->next);
            ++num_items;
        }
    }

    bool remove(size_t index) {
        if (index >= num_items) return false;
        if (index == 0) {
            pop_front();
            return true;
        }
        else {
            Node* p = head;
            for (size_t i = 0; i < index - 1; ++i) p = p->next;
            Node* temp = p->next;
            p->next = p->next->next;
            delete temp;
            --num_items;
            if (index == num_items - 1) tail = p;
            return true;
        }
    }

    size_t find(const T& item) {
        Node* p = head;
        size_t i = 0;
    }
};
