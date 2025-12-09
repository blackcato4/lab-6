#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg) {
    return deg * M_PI / 180.0;
}

double rad2deg(double rad) {
    return rad * 180.0 / M_PI;
}

double findXComponent(double L1, double rad1, double L2, double rad2) {
    return L1 * cos(rad1) + L2 * cos(rad2);
}

double findYComponent(double L1, double rad1, double L2, double rad2) {
    return L1 * sin(rad1) + L2 * sin(rad2);
}

double pythagoras(double x, double y) {
    return sqrt(x * x + y * y);
}

void showResult(double length, double direction) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main() {
    double L1, L2, deg1, deg2;
    double rad1, rad2;
    
    cout << "Enter length of the first vector: ";
    cin >> L1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> deg1;
    
    cout << "Enter length of the second vector: ";
    cin >> L2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> deg2;

    // Convert to radian
    rad1 = deg2rad(deg1);
    rad2 = deg2rad(deg2);

    // Components
    double x = findXComponent(L1, rad1, L2, rad2);
    double y = findYComponent(L1, rad1, L2, rad2);

    // Result vector
    double R = pythagoras(x, y);
    double theta = rad2deg(atan2(y, x));

    // Show result
    showResult(R, theta);

    return 0;
}
