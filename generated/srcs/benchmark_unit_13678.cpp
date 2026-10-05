#include "bench/fib.hpp"

// RE Benchmark TU 13678 of 20000 (depth=28, stamp="default")
namespace bench_tu_13678 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13678>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13678
