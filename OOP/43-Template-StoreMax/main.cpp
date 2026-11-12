#include <iostream>

template <typename T>
class storeMax {
    private:
    T value;
    public:
    storeMax(const T& item = T());

    T getValue() const;
    void updateValue(const T& item);
};

template <typename T>
storeMax<T>::storeMax(const T& item) : value(item) {}

template <typename T>
T storeMax<T>::getValue() const {
    return value;
}

template <typename T>
void storeMax<T>::updateValue(const T& item) {
    if(item > value) {
        value = item;
    }
    
}



int main() {
    storeMax<int> maxValue(10);

    maxValue.updateValue(25);
    maxValue.updateValue(7);
    maxValue.updateValue(42);
    maxValue.updateValue(15);

    std::cout << maxValue.getValue() << "\n";

    storeMax<double> maxValueDouble(4.2);
    
    maxValueDouble.updateValue(2.5);
    maxValueDouble.updateValue(0.7);
    maxValueDouble.updateValue(42);
    maxValueDouble.updateValue(15.3);

    std::cout << maxValueDouble.getValue() << "\n";

    return 0;
}