#include "bench/fib.hpp"

// RE Benchmark TU 4328 of 20000 (depth=28, stamp="default")
namespace bench_tu_4328 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4328>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4328
