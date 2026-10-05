#include "bench/fib.hpp"

// RE Benchmark TU 2756 of 20000 (depth=28, stamp="default")
namespace bench_tu_2756 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2756>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2756
