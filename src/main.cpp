#include <iostream>

template<uint64_t N>
struct Fibonacci {
  static const uint64_t val = Fibonacci<N - 1>::val + Fibonacci<N - 2>::val;
};

template<>
struct Fibonacci<0> {
  static const uint64_t val = 0;
};

template<>
struct Fibonacci<1> {
  static const uint64_t val = 1;
};

int main(int argsc, char * vargs[]) {
  std::cout << "fabonacci: " << Fibonacci<6>::val << std::endl;
  std::cout << "fabonacci: " << Fibonacci<11>::val << std::endl;
  std::cout << "fabonacci: " << Fibonacci<15>::val << std::endl;
  return 0;
}
