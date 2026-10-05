#include "bench/fib.hpp"

// RE Benchmark TU 13717 of 20000 (depth=28, stamp="default")
namespace bench_tu_13717 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13717>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13717
