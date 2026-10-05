#include "bench/fib.hpp"

// RE Benchmark TU 10188 of 20000 (depth=28, stamp="default")
namespace bench_tu_10188 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10188>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10188
