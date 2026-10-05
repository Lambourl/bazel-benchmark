#include "bench/fib.hpp"

// RE Benchmark TU 4883 of 20000 (depth=28, stamp="default")
namespace bench_tu_4883 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4883>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4883
