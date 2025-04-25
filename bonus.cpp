#include <iostream>
#include <stack>
#include <queue>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

// 1. **Stack (LIFO)**
void stack_example() {
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Access top element
    cout << "Top element: " << s.top() << endl;

    // Pop the top element
    s.pop();

    // Access after popping
    cout << "Top element after pop: " << s.top() << endl;
}

// 2. **Heap (Dynamic Memory Allocation)**
void heap_example() {
    int* ptr = new int(10);  // Allocate memory
    cout << "Value: " << *ptr << endl;

    // Modify the value
    *ptr = 20;
    cout << "Modified Value: " << *ptr << endl;

    delete ptr;  // Deallocate memory
}

// 3. **Queue (FIFO)**
void queue_example() {
    queue<int> q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Access front element
    cout << "Front element: " << q.front() << endl;

    // Pop the front element
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;
}

// 4. **Priority Queue (Max-heap)**
void priority_queue_example() {
    priority_queue<int> pq;

    // Push elements into the priority queue
    pq.push(10);
    pq.push(20);
    pq.push(5);

    // Access top element (highest priority)
    cout << "Top element: " << pq.top() << endl;

    // Pop the top element
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl;
}

// 5. **Hashing (Unordered Map)**
void hashing_example() {
    unordered_map<string, int> umap;

    // Insert key-value pairs
    umap["apple"] = 5;
    umap["banana"] = 3;
    umap["cherry"] = 7;

    // Access value by key
    cout << "Value for 'banana': " << umap["banana"] << endl;

    // Iterate through the unordered map
    for (auto it = umap.begin(); it != umap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}

// 6. **Map (Ordered Map)**
void map_example() {
    map<string, int> m;

    // Insert key-value pairs
    m["apple"] = 10;
    m["banana"] = 5;
    m["cherry"] = 7;

    // Access value by key
    cout << "Value for 'banana': " << m["banana"] << endl;

    // Iterate through the map
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}

// 7. **Vector (Dynamic Array)**
void vector_example() {
    vector<int> v;

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Access elements
    cout << "First element: " << v[0] << endl;
    cout << "Last element: " << v.back() << endl;

    // Iterate through vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Remove the last element
    v.pop_back();
    cout << "After pop_back(), last element: " << v.back() << endl;

    // Resize vector
    v.resize(5, 50);  // Resize to 5 elements, fill new ones with 50
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// 8. **Taking Input for Arrays/Vectors**
void input_example() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Taking multiple inputs for a vector
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output the values
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 9. **String Manipulation**
void string_example() {
    string s = "hello";

    // Accessing characters
    cout << "First character: " << s[0] << endl;

    // Append string
    s += " world";

    // Compare strings
    if (s == "hello world") {
        cout << "Strings are equal!" << endl;
    }

    // Find substring
    size_t found = s.find("world");
    if (found != string::npos) {
        cout << "'world' found at index " << found << endl;
    }

    // Modify string
    s.replace(0, 5, "Hi");
    cout << "Modified string: " << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);  // Speed up input/output
    cin.tie(NULL);  // Untie cin from cout

    // Calling each example function
    stack_example();
    heap_example();
    queue_example();
    priority_queue_example();
    hashing_example();
    map_example();
    vector_example();
    input_example();
    string_example();

    return 0;
}
