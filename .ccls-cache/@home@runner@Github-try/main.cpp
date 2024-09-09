#include <cmath> // For std::sqrt and std::pow
#include <iostream> // For demonstration purposes

template <typename T>
class PointType {
private:
    T x, y;

public:
    // Default constructor
    PointType() : x(0), y(0) {}

    // Parameterized constructor
    PointType(T x, T y) : x(x), y(y) {}

    // Set x-coordinate
    void setX(T x) { this->x = x; }

    // Get x-coordinate
    T getX() const { return x; }

    // Set y-coordinate
    void setY(T y) { this->y = y; }

    // Get y-coordinate
    T getY() const { return y; }

    // Calculate the distance between this point and another point
    T distanceTo(const PointType<T>& other) const {
        T dx = x - other.x;
        T dy = y - other.y;
        return std::sqrt(dx * dx + dy * dy);
    }

    // Overload the subtraction operator
    T operator-(const PointType<T>& other) const {
        return distanceTo(other);
    }
};


int main() {
    PointType<int> p1(3, 4);
    PointType<int> p2(6, 8);

    std::cout << "Distance between p1 and p2: " << (p1 - p2) << std::endl;

    PointType<double> p3(1.5, 2.5);
    PointType<double> p4(9, 6.5);

    std::cout << "Distance between p3 and p4: " << (p3 - p4) << std::endl;

    return 0;
}
