#include "bench/fib.hpp"

// RE Benchmark TU 11771 of 20000 (depth=28, stamp="default")
namespace bench_tu_11771 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11771>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11771
