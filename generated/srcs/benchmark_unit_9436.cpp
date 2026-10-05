#include "bench/fib.hpp"

// RE Benchmark TU 9436 of 20000 (depth=28, stamp="default")
namespace bench_tu_9436 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9436>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9436
