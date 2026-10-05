#include "bench/fib.hpp"

// RE Benchmark TU 5430 of 20000 (depth=28, stamp="default")
namespace bench_tu_5430 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5430>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5430
