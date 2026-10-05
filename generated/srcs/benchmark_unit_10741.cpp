#include "bench/fib.hpp"

// RE Benchmark TU 10741 of 20000 (depth=28, stamp="default")
namespace bench_tu_10741 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10741>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10741
