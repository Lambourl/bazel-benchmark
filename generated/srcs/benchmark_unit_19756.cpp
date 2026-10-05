#include "bench/fib.hpp"

// RE Benchmark TU 19756 of 20000 (depth=28, stamp="default")
namespace bench_tu_19756 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19756>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19756
