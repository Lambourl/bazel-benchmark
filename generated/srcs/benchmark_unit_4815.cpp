#include "bench/fib.hpp"

// RE Benchmark TU 4815 of 20000 (depth=28, stamp="default")
namespace bench_tu_4815 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4815>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4815
