class DynamicArray {
private:
    int* data;
    int capacity;
    int size;
public:

    DynamicArray(int capacity) {
        data = new int[capacity];
        this->capacity = capacity;
        size = 0;
    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        data[i] = n;
    }

    void pushback(int n) {
        if(size == capacity) {
            resize();
        }
        data[size] = n;
        size++;
    }

    int popback() {
        size--;
        return data[size];
    }

    void resize() {
        capacity *= 2;
        int *temp = new int[capacity];
        for(int i = 0; i < size; ++i) {
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    ~DynamicArray() {
        delete[] data;
    }
};
