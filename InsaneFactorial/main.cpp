#include <iostream>

template<unsigned N>
const unsigned long long Factorial(){ return N* Factorial<N-1>();};
template<> const unsigned long long Factorial<0>(){ return 1;};

int main() {
    std::cout<< Factorial<0>()<<std::endl;
    std::cout<< Factorial<1>()<<std::endl;
    std::cout<< Factorial<2>()<<std::endl;
    std::cout<< Factorial<3>()<<std::endl;
    return 0;
}
