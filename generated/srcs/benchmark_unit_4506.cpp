#include "bench/fib.hpp"

// RE Benchmark TU 4506 of 20000 (depth=28, stamp="default")
namespace bench_tu_4506 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4506>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4506
