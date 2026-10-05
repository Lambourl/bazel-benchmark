#include "bench/fib.hpp"

// RE Benchmark TU 725 of 20000 (depth=28, stamp="default")
namespace bench_tu_725 {
constexpr unsigned long long result = ::bench::slow_fib<28, 725>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_725
