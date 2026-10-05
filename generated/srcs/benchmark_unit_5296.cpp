#include "bench/fib.hpp"

// RE Benchmark TU 5296 of 20000 (depth=28, stamp="default")
namespace bench_tu_5296 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5296>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5296
