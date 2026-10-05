#include "bench/fib.hpp"

// RE Benchmark TU 1954 of 20000 (depth=28, stamp="default")
namespace bench_tu_1954 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1954>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1954
