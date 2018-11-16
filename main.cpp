#include <iostream>
#include <math.h>

class point{
private:
    int x;
public:
    int getX() {
        return x;
    }

    int setX(float* x1){
        *x1=5.5;
        x=*x1;
        std::cout << x <<std::endl;
    }
};

int main() {
    float* x;
    point a;
    a.getX();
    a.setX(x);
    return 0;
}