#include "bench/fib.hpp"

// RE Benchmark TU 5333 of 20000 (depth=28, stamp="default")
namespace bench_tu_5333 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5333>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5333
