#include <iostream>
using namespace std;

template <typename T>
class Counter {
private:
    T value;

public:
    Counter(T initial);

    T getValue() const;

    void add(T amount);

    Counter<T> operator+(const Counter<T>& other) const;

    Counter<T>& operator+=(const Counter<T>& other);
};

template <typename T>
Counter<T>::Counter(T initial) : value(initial) {}

template <typename T>
T Counter<T>::getValue() const {
    return value;
}

template <typename T>
void Counter<T>::add(T amount) {
    value += amount;
}

template <typename T>
Counter<T> Counter<T>::operator+(const Counter<T>& other) const {
    return Counter(value + other.getValue());
}

template <typename T>
Counter<T>& Counter<T>::operator+=(const Counter<T>& other) {
    value += other.getValue();
    return *this;
}


int main() {
    Counter<int> a(10);
    Counter<int> b(5);

    Counter<int> c = a + b;

    cout << c.getValue() << '\n';

    a += b;
    cout << a.getValue() << '\n';

    a.add(3);
    cout << a.getValue() << '\n';

    Counter<double> x(2.5);
    Counter<double> y(1.25);

    Counter<double> z = x + y;
    cout << z.getValue() << '\n';

    x += y;
    cout << x.getValue() << '\n';

    cout << b.getValue() << '\n';

    return 0;
}
