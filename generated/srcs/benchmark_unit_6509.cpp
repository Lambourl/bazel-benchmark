#include "bench/fib.hpp"

// RE Benchmark TU 6509 of 20000 (depth=28, stamp="default")
namespace bench_tu_6509 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6509>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6509
