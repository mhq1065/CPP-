#include <iostream>
using namespace std;

class vehicle {
protected:
    int wheels;
    float weight;

public:
    vehicle(int wheels, float weight);
    virtual void display() = 0;
};

vehicle::vehicle(int wheels, float weight) {
    this->wheels = wheels;
    this->weight = weight;
}

class car : private vehicle {
private:
    int passenger_load;

public:
    car(int wheels = 4, float weight = 2, int passenger_load = 4) : vehicle(wheels, weight) {
        this->passenger_load = passenger_load;
    };
    void display() {
        printf("wheels=%d\nweight=%.f\npassenger_load=%d\n", wheels, weight, passenger_load);
    };
};

class truck : private vehicle {
private:
    int passenger_load, payload;

public:
    truck(int wheels = 6, float weight = 4, int passenger_load = 2, int payload = 10)
        : vehicle(wheels, weight), passenger_load(passenger_load), payload(payload){};
    void display() {
        printf("wheels=%d\nweight=%.f\npassenger_load=%d\npayload=%d\n", wheels, weight, passenger_load, payload);
    };
};

int main() {
    car c;
    truck t;
    cout << "car c:" << endl;
    c.display();
    cout << "\n";
    cout << "truck t:" << endl;
    t.display();
    return 0;
}