#include "bench/fib.hpp"

// RE Benchmark TU 771 of 20000 (depth=28, stamp="default")
namespace bench_tu_771 {
constexpr unsigned long long result = ::bench::slow_fib<28, 771>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_771
