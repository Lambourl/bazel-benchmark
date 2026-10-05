#include "bench/fib.hpp"

// RE Benchmark TU 16034 of 20000 (depth=28, stamp="default")
namespace bench_tu_16034 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16034>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16034
