class DynamicArray {
    int *arr;
    int capacity;
    int size;
public:

    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        this->arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == capacity) {
            this->resize();
        }
        arr[size++] = n; 
    }

    int popback() {
        return arr[--size];
    }

    void resize() {
        int *new_arr = new int[capacity * 2];
        for (int i = 0; i < size; i++) {
            new_arr[i] = arr[i];
        }
        this->capacity = capacity * 2;
        arr = new_arr;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
