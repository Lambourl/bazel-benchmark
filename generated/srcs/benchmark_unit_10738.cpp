#include "bench/fib.hpp"

// RE Benchmark TU 10738 of 20000 (depth=28, stamp="default")
namespace bench_tu_10738 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10738>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10738
