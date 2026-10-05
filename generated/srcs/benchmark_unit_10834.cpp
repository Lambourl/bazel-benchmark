#include "bench/fib.hpp"

// RE Benchmark TU 10834 of 20000 (depth=28, stamp="default")
namespace bench_tu_10834 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10834>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10834
