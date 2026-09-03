class LRUCache {
public:

    struct Node {
        int key;
        int value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    int capacity;

    // key -> address of the node
    unordered_map<int, Node*> mp;

    // left = LRU side
    // right = MRU side
    Node* left;
    Node* right;

    // Remove a node from the linked list
    void remove(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    // Insert node at the MRU side
    void insert(Node* node) {
        Node* prevNode = right->prev;

        prevNode->next = node;
        node->prev = prevNode;

        node->next = right;
        right->prev = node;
    }

    LRUCache(int capacity) {
        this->capacity = capacity;

        // Dummy nodes
        left = new Node(0, 0);
        right = new Node(0, 0);

        left->next = right;
        right->prev = left;
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];

        remove(node);
        insert(node);

        return node->value;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            Node* node = mp[key];

            node->value = value;

            remove(node);
            insert(node);

            return;
        }

        Node* node = new Node(key, value);

        mp[key] = node;

        insert(node);

        if(mp.size() > capacity){
            Node* lru = left->next;

            remove(lru);

            mp.erase(lru->key);

            delete lru;
        }
    }
};
