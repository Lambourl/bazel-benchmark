#include "bench/fib.hpp"

// RE Benchmark TU 19994 of 20000 (depth=28, stamp="default")
namespace bench_tu_19994 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19994>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19994
