#include "bench/fib.hpp"

// RE Benchmark TU 8495 of 20000 (depth=28, stamp="default")
namespace bench_tu_8495 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8495>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8495
