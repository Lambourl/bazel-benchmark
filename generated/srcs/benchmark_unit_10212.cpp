#include "bench/fib.hpp"

// RE Benchmark TU 10212 of 20000 (depth=28, stamp="default")
namespace bench_tu_10212 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10212>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10212
