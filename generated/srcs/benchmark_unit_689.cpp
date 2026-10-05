#include "bench/fib.hpp"

// RE Benchmark TU 689 of 20000 (depth=28, stamp="default")
namespace bench_tu_689 {
constexpr unsigned long long result = ::bench::slow_fib<28, 689>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_689
