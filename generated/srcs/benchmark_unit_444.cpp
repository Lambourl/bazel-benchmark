#include "bench/fib.hpp"

// RE Benchmark TU 444 of 20000 (depth=28, stamp="default")
namespace bench_tu_444 {
constexpr unsigned long long result = ::bench::slow_fib<28, 444>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_444
