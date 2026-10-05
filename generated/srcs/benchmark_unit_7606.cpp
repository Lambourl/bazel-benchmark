#include "bench/fib.hpp"

// RE Benchmark TU 7606 of 20000 (depth=28, stamp="default")
namespace bench_tu_7606 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7606>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7606
