#include "bench/fib.hpp"

// RE Benchmark TU 15294 of 20000 (depth=28, stamp="default")
namespace bench_tu_15294 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15294>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15294
