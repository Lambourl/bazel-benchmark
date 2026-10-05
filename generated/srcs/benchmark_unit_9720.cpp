#include "bench/fib.hpp"

// RE Benchmark TU 9720 of 20000 (depth=28, stamp="default")
namespace bench_tu_9720 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9720>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9720
