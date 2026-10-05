#include "bench/fib.hpp"

// RE Benchmark TU 6639 of 20000 (depth=28, stamp="default")
namespace bench_tu_6639 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6639>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6639
