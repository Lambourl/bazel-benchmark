#include "bench/fib.hpp"

// RE Benchmark TU 115 of 20000 (depth=28, stamp="default")
namespace bench_tu_115 {
constexpr unsigned long long result = ::bench::slow_fib<28, 115>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_115
