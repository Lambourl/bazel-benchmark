#include "bench/fib.hpp"

// RE Benchmark TU 4744 of 20000 (depth=28, stamp="default")
namespace bench_tu_4744 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4744>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4744
