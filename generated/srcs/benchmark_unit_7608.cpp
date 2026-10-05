#include "bench/fib.hpp"

// RE Benchmark TU 7608 of 20000 (depth=28, stamp="default")
namespace bench_tu_7608 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7608>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7608
