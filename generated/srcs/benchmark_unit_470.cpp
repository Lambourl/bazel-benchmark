#include "bench/fib.hpp"

// RE Benchmark TU 470 of 20000 (depth=28, stamp="default")
namespace bench_tu_470 {
constexpr unsigned long long result = ::bench::slow_fib<28, 470>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_470
