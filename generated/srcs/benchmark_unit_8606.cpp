#include "bench/fib.hpp"

// RE Benchmark TU 8606 of 20000 (depth=28, stamp="default")
namespace bench_tu_8606 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8606>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8606
