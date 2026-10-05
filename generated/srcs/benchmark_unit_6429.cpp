#include "bench/fib.hpp"

// RE Benchmark TU 6429 of 20000 (depth=28, stamp="default")
namespace bench_tu_6429 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6429>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6429
