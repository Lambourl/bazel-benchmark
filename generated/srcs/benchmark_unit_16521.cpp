#include "bench/fib.hpp"

// RE Benchmark TU 16521 of 20000 (depth=28, stamp="default")
namespace bench_tu_16521 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16521>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16521
