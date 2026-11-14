#include <iostream>
#include <stdexcept>
using namespace std;

class TemperatureRange {
private:
    double minTemp;
    double maxTemp;

public:
    // A: Constructor with default values 0
    TemperatureRange(double minTemp = 0, double maxTemp = 0);

    // B: Return the temperature difference
    double difference() const;

    // C: Update both temperatures
    void setRange(double min, double max);

    // D: Return true when 0 is within the range
    bool containsZero() const;
};

TemperatureRange::TemperatureRange(double minTemp, double maxTemp) : minTemp(minTemp), maxTemp(maxTemp) {
    if (maxTemp < minTemp) {
        throw invalid_argument("Max temp can't be smaller than min temp!");
    }
}

double TemperatureRange::difference() const {
    return maxTemp - minTemp;
}

void TemperatureRange::setRange(double min, double max) {
    if(min > max) {
        throw invalid_argument("Max temp can't be smaller than min temp!");
    }
    minTemp = min;
    maxTemp = max;
}

bool TemperatureRange::containsZero() const {
    if (maxTemp >= 0 && minTemp <= 0) {
        return true;
    }
    return false;
}

int main() {
    TemperatureRange day(-5, 12);
    cout << boolalpha;

    cout << day.difference() << '\n';
    cout << day.containsZero() << '\n';

    day.setRange(3, 15);

    cout << day.difference() << '\n';
    cout << day.containsZero() << '\n';

    try
    {
        TemperatureRange day2(-5, -8);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    

    return 0;
}
