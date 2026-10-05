#include "bench/fib.hpp"

// RE Benchmark TU 8115 of 20000 (depth=28, stamp="default")
namespace bench_tu_8115 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8115>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8115
