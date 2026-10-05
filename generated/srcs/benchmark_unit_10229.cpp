#include "bench/fib.hpp"

// RE Benchmark TU 10229 of 20000 (depth=28, stamp="default")
namespace bench_tu_10229 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10229>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10229
