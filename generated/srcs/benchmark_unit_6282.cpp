#include "bench/fib.hpp"

// RE Benchmark TU 6282 of 20000 (depth=28, stamp="default")
namespace bench_tu_6282 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6282>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6282
