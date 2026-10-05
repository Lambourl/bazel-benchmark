#include "bench/fib.hpp"

// RE Benchmark TU 17244 of 20000 (depth=28, stamp="default")
namespace bench_tu_17244 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17244>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17244
