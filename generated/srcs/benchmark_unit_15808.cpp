#include "bench/fib.hpp"

// RE Benchmark TU 15808 of 20000 (depth=28, stamp="default")
namespace bench_tu_15808 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15808>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15808
