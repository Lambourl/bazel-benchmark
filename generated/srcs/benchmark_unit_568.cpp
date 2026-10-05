#include "bench/fib.hpp"

// RE Benchmark TU 568 of 20000 (depth=28, stamp="default")
namespace bench_tu_568 {
constexpr unsigned long long result = ::bench::slow_fib<28, 568>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_568
