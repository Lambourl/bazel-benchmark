#include "bench/fib.hpp"

// RE Benchmark TU 8191 of 20000 (depth=28, stamp="default")
namespace bench_tu_8191 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8191>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8191
