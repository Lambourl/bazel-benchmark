#include "bench/fib.hpp"

// RE Benchmark TU 11231 of 20000 (depth=28, stamp="default")
namespace bench_tu_11231 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11231>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11231
