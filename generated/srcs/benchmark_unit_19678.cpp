#include "bench/fib.hpp"

// RE Benchmark TU 19678 of 20000 (depth=28, stamp="default")
namespace bench_tu_19678 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19678>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19678
