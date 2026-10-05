#include "bench/fib.hpp"

// RE Benchmark TU 13834 of 20000 (depth=28, stamp="default")
namespace bench_tu_13834 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13834>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13834
