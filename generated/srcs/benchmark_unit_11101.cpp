#include "bench/fib.hpp"

// RE Benchmark TU 11101 of 20000 (depth=28, stamp="default")
namespace bench_tu_11101 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11101>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11101
