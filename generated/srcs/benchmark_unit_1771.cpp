#include "bench/fib.hpp"

// RE Benchmark TU 1771 of 20000 (depth=28, stamp="default")
namespace bench_tu_1771 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1771>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1771
