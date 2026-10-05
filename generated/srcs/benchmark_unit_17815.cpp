#include "bench/fib.hpp"

// RE Benchmark TU 17815 of 20000 (depth=28, stamp="default")
namespace bench_tu_17815 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17815>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17815
