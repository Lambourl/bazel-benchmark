#include "bench/fib.hpp"

// RE Benchmark TU 5436 of 20000 (depth=28, stamp="default")
namespace bench_tu_5436 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5436>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5436
