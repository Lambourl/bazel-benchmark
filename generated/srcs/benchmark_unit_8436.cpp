#include "bench/fib.hpp"

// RE Benchmark TU 8436 of 20000 (depth=28, stamp="default")
namespace bench_tu_8436 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8436>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8436
