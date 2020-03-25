

class LRUCache : public Cache {
public:
  LRUCache(int &capa) { cp = capa; }

  void set(int key, int value) {

    // create node
    Node *n;

    // if map of nodes is empty
    if (mp.empty()) {

      // allocate memory for node with given key and value
      n = new Node(key, value);

      // set tail head pointers
      tail = head = n;

      // set in map a node
      mp[key] = n;
      return;
    }

    // check if node exists
    auto it = mp.find(key);

    // node exists
    if (it != mp.end()) {

      // set value
      it->second->value = value;

      if (head == it->second)
        return;

      it->second->prev->next = it->second->next;

      if (tail == it->second)
        tail = tail->prev;
      else
        it->second->next->prev = it->second->prev;

      it->second->next = head;
      it->second->prev = nullptr;

      head->prev = it->second;
      head = it->second;
    } else {
      n = new Node(head->prev, head, key, value);
      head->prev = n;
      head = n;
      mp[key] = n;

      if (mp.size() > cp) {
        tail = tail->prev;
        mp.erase(tail->next->key);
        delete tail->next;
        tail->next = nullptr;
      }
    }
  }

  int get(int key) {
    auto result = mp.find(key);
    if (result != mp.end())
      return result->second->value;
    return -1;
  }
};

