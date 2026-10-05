#include "bench/fib.hpp"

// RE Benchmark TU 2706 of 20000 (depth=28, stamp="default")
namespace bench_tu_2706 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2706>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2706
