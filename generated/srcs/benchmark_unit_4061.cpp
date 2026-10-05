#include "bench/fib.hpp"

// RE Benchmark TU 4061 of 20000 (depth=28, stamp="default")
namespace bench_tu_4061 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4061>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4061
