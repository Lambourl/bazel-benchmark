#include "bench/fib.hpp"

// RE Benchmark TU 4608 of 20000 (depth=28, stamp="default")
namespace bench_tu_4608 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4608>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4608
