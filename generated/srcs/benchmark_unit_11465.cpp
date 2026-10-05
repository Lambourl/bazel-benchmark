#include "bench/fib.hpp"

// RE Benchmark TU 11465 of 20000 (depth=28, stamp="default")
namespace bench_tu_11465 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11465>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11465
