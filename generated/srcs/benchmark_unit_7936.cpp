#include "bench/fib.hpp"

// RE Benchmark TU 7936 of 20000 (depth=28, stamp="default")
namespace bench_tu_7936 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7936>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7936
