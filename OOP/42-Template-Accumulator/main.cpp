#include <iostream>
#include <string>

template <typename T>
class accumulator {
private:
    T total;

public:
    accumulator(const T& value = T{});
    T getTotal() const;
    void addValue(const T& value);
};

template <typename T>
accumulator<T>::accumulator(const T& value) : total(value) {}

template <typename T>
T accumulator<T>::getTotal() const {
    return total;    
}

template <typename T>
void accumulator<T>::addValue(const T& value) {
    total += value;
}



int main() {
    accumulator<int> intAcc(25);
    accumulator<double> doubleAcc;
    accumulator<std::string> strAcc("Walker");

    strAcc.addValue("-based");
    strAcc.addValue(" container");
    
    std::cout << intAcc.getTotal() << '\n';
    std::cout << doubleAcc.getTotal() << '\n';
    std::cout << strAcc.getTotal() << '\n';
    
    return 0;
}