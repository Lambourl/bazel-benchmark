#include "bench/fib.hpp"

// RE Benchmark TU 703 of 20000 (depth=28, stamp="default")
namespace bench_tu_703 {
constexpr unsigned long long result = ::bench::slow_fib<28, 703>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_703
