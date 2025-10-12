#include <iostream>

template<typename T>
class vector{
    private:
        T* data;
        size_t size;
        size_t capacity;
  public:
    vector()
        : data(nullptr), size(0), capacity(0)
    {
    }
    ~vector()
    {
        delete []data;
    }
    
    vector(const vector<T> &old)
    {
      data = new T[old.capacity];
      size = old.size;
      capacity = old.capacity;
      for(size_t i = 0; i < size; i++)
            data[i] = old.data[i];
    }

    size_t get_size() const
    {
        return size;
    }

    size_t get_capacity() const
    {
        return capacity;
    }

    T& operator[](const size_t index)
    {
        return data[index];
    }

    const T& operator[](const size_t index) const
    {
        return data[index];
    }

    void reverse()
    {
        const size_t count = size/2;
        for(size_t i = 0; i < count; i++)
        {
            T temp = data[i];
            data[i] = data[size-i-1];
            data[size-1-i] = temp;
        }
    }
    
    void erase(const size_t position)
    {
        if(position >= size) return;
        for(size_t i = position; i < size-1; i++)
            data[i] = data[i+1];
        --size;
    }

    void pop_back()
    {
        if(size > 0)
        {
            size--;
            data[size].~T();
        }
    }
    
    void push_back(const T& value)
    {
    if(capacity == size){
        size_t new_capacity;

        if(capacity == 0)
            new_capacity = 1;

        else
            new_capacity = capacity * 2;

        T* newdata = new T[new_capacity];
        for(size_t i = 0; i < size; i++)
          newdata[i] = data[i];

        delete []data;
        data = newdata;
        capacity = new_capacity;
    }
    data[size++] = value;
}

    void insert(const T& value, const size_t position)
    {
        if(position > size)return;

        if(capacity == 0)
            capacity = 1;
        if(size == capacity){
            capacity*=2;

        T* newdata = new T[capacity];

        for(size_t i = 0; i < size; i++)
            newdata[i] = data[i];

        delete []data;
        data = newdata;
        }
        for(int i = int(size); i > int(position); i--)
            data[i] = data[i-1];

        data[position] = value;
        size++;
    }
};
