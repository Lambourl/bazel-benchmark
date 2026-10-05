#include "bench/fib.hpp"

// RE Benchmark TU 4081 of 20000 (depth=28, stamp="default")
namespace bench_tu_4081 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4081>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4081
