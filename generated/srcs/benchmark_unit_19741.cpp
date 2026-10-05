#include "bench/fib.hpp"

// RE Benchmark TU 19741 of 20000 (depth=28, stamp="default")
namespace bench_tu_19741 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19741>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19741
