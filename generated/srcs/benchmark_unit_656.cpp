#include "bench/fib.hpp"

// RE Benchmark TU 656 of 20000 (depth=28, stamp="default")
namespace bench_tu_656 {
constexpr unsigned long long result = ::bench::slow_fib<28, 656>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_656
