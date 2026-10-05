#include "bench/fib.hpp"

// RE Benchmark TU 18913 of 20000 (depth=28, stamp="default")
namespace bench_tu_18913 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18913>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18913
