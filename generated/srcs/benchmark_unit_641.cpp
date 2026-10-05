#include "bench/fib.hpp"

// RE Benchmark TU 641 of 20000 (depth=28, stamp="default")
namespace bench_tu_641 {
constexpr unsigned long long result = ::bench::slow_fib<28, 641>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_641
