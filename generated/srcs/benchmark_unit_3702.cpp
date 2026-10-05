#include "bench/fib.hpp"

// RE Benchmark TU 3702 of 20000 (depth=28, stamp="default")
namespace bench_tu_3702 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3702>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3702
