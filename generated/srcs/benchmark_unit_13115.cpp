#include "bench/fib.hpp"

// RE Benchmark TU 13115 of 20000 (depth=28, stamp="default")
namespace bench_tu_13115 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13115>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13115
