#include "bench/fib.hpp"

// RE Benchmark TU 4102 of 20000 (depth=28, stamp="default")
namespace bench_tu_4102 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4102>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4102
