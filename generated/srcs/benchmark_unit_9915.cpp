#include "bench/fib.hpp"

// RE Benchmark TU 9915 of 20000 (depth=28, stamp="default")
namespace bench_tu_9915 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9915>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9915
