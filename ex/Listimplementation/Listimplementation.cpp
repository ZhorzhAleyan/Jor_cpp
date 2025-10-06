struct Node{
  int data;
  Node* prev;
  Node* next;
  Node(int value){
      data = value;
      next = nullptr;
      prev = nullptr;
  }
};
class List{
    private: 
        Node* head;
        Node* tail;
    public: 
        List() : head(nullptr), tail(nullptr){}
    
    ~List(){
        Node* current = head;
        while(current != nullptr){
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = tail = nullptr;
    }
    
void print(){
    Node* current = head;
    while(current != nullptr){
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";
}

void push_front(int data){
    Node* newnode = new Node(data);
    
    if(head == nullptr){
        head = newnode;
        tail = newnode;
    }
      else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
      }    
}

void push_back(int data){
    Node* newnode = new Node(data);
    
    if(head == nullptr){
        head = newnode;
        tail = newnode;
    }
      else{
     newnode->prev = tail;
     tail->next = newnode;
     tail = newnode;
      }
}

void insert(int data, int position){
    
    Node* newnode = new Node(data);
    newnode->next = nullptr;
    newnode->prev = nullptr;
    
    if(head == nullptr || position == 1){
        push_front(data);
        return;
    }
    
    Node* current = head;
    size_t i=1;
    while(current->next != nullptr && i < position-1){
        current = current->next;
        ++i;
    }
            newnode->next = current->next;
            newnode->prev = current;
                if(current->next != nullptr)
                    current->next->prev = newnode;
            else 
                tail = newnode;
                
            current->next = newnode;

}

void reverse(){
    if(head == nullptr)
        return;
    Node* current = head;
    Node* temp = nullptr;
    tail = head;
    while(current != nullptr){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp != nullptr)
        head = temp->prev;
}

int search(int data){
    Node* current = head;
    size_t i = 0;
     while(current != nullptr){
        ++i;
        if(current->data == data)
            return i;
        current = current->next;    
    }
      return -1;
}

void pop_front(){
    if(head == nullptr)
        return;
    
    Node* temp = head;
    head = head->next;
        if(head != nullptr)
            head->prev = nullptr;
        else 
            tail = nullptr;
    delete temp;        
}

void pop_back(){
    if(head == nullptr) 
        return;

    Node* temp = tail;

    if(tail->prev != nullptr){ 
        tail = tail->prev;
        tail->next = nullptr;
    } else { 
        head = nullptr;
        tail = nullptr;
    }

    delete temp;
}

void erase(int position){
    if(head == nullptr)
        return;
    
    if(position == 1){
       pop_front();
       return;
    }
    Node* current = head;
    
    for(size_t i=1; i<position && current != nullptr; i++)
            current = current->next;
    
    if(current == nullptr)
        return;
    
    if(current == tail){
        pop_back();
        return;
    }
     
    current->next->prev = current->prev;
    current->prev->next = current->next;
    delete current;
 }
};
