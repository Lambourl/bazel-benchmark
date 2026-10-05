#include "bench/fib.hpp"

// RE Benchmark TU 10585 of 20000 (depth=28, stamp="default")
namespace bench_tu_10585 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10585>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10585
