#include "bench/fib.hpp"

// RE Benchmark TU 5810 of 20000 (depth=28, stamp="default")
namespace bench_tu_5810 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5810>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5810
