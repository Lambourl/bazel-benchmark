#include "bench/fib.hpp"

// RE Benchmark TU 1582 of 20000 (depth=28, stamp="default")
namespace bench_tu_1582 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1582>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1582
