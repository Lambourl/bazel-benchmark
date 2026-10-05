#include "bench/fib.hpp"

// RE Benchmark TU 15897 of 20000 (depth=28, stamp="default")
namespace bench_tu_15897 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15897>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15897
