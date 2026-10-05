#include "bench/fib.hpp"

// RE Benchmark TU 756 of 20000 (depth=28, stamp="default")
namespace bench_tu_756 {
constexpr unsigned long long result = ::bench::slow_fib<28, 756>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_756
