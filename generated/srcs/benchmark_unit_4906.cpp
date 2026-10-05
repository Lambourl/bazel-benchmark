#include "bench/fib.hpp"

// RE Benchmark TU 4906 of 20000 (depth=28, stamp="default")
namespace bench_tu_4906 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4906>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4906
