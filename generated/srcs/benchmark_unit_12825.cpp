#include "bench/fib.hpp"

// RE Benchmark TU 12825 of 20000 (depth=28, stamp="default")
namespace bench_tu_12825 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12825>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12825
