#include "bench/fib.hpp"

// RE Benchmark TU 965 of 20000 (depth=28, stamp="default")
namespace bench_tu_965 {
constexpr unsigned long long result = ::bench::slow_fib<28, 965>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_965
