#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return x - cos(x);
}

int main() {
    double a = -10, b = 10;
    double p;
    int count = 0;
    double eps = 0.00000001;
    while((b - a) > eps) {
        p = (a + b)/2;
        count++;
        if(f(a)*f(p) < 0) {
            b = p;
        }else if(f(b)*f(p) < 0) {
            a = p;
        }else{
            cout << "middle point equals to root" << endl;
        }
    }
    cout << "Count equals to: " << count << endl;
    cout << "Root equals to: " << p << endl;

    return 0;
}