#include "bench/fib.hpp"

// RE Benchmark TU 5540 of 20000 (depth=28, stamp="default")
namespace bench_tu_5540 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5540>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5540
