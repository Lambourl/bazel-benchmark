#include "bench/fib.hpp"

// RE Benchmark TU 19960 of 20000 (depth=28, stamp="default")
namespace bench_tu_19960 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19960>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19960
