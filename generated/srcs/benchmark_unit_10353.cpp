#include "bench/fib.hpp"

// RE Benchmark TU 10353 of 20000 (depth=28, stamp="default")
namespace bench_tu_10353 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10353>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10353
