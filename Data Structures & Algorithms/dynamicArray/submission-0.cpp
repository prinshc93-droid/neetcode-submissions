class DynamicArray {
public:
    int capacity;
    int length;
    int* data;

    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->length = 0;
        this->data = new int[capacity];
    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        data[i] = n;
    }

    void pushback(int n) {
        if (length == capacity) {
            int* newData = new int[capacity * 2];

            for (int i = 0; i < length; i++) {
                newData[i] = data[i];
            }

            delete[] data;

            data = newData;
            capacity *= 2;
        }

        data[length] = n;
        length++;
    }

    int popback() {
        length--;
        return data[length];
    }

    void resize() {
        int* newData = new int[capacity * 2];

        for (int i = 0; i < length; i++) {
            newData[i] = data[i];
        }

        delete[] data;

        data = newData;
        capacity *= 2;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};