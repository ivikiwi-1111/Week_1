#include <iostream>
#include <vector>
#include <math.h>

struct Point {double x; double y;};
std::ostream& operator<<(std::ostream &os, const Point&p){
    os<< "{" << p.x << ", " << p.y << "}"<<std::endl;
    return os;
}

Point terribleTrigonometry(unsigned int n, unsigned int N){
    Point p;

    if (n!=1){
        Point tau = terribleTrigonometry(n-1, N);
        p.x = tau.x*cos(2*M_PI/N) - tau.y*sin(2*M_PI/N);
        p.y = tau.y*cos(2*M_PI/N) + tau.x*sin(2*M_PI/N);
        std::cout<<Point{p.x, p.y};
        std::cout<<n<<std::endl;
    }

    else{
        p.x = cos(2*M_PI/N);
        p.y = sin(2*M_PI/N);
        std::cout<<Point{p.x, p.y};
        std::cout<<n<<std::endl;
    }
    return p;
}


int main() {
    unsigned int n;
    std::cout<<"Enter n: " << std::endl;
    std::cin >> n;
    std::cout<<terribleTrigonometry(n, n);
    return 0;
}
