#include "bench/fib.hpp"

// RE Benchmark TU 19324 of 20000 (depth=28, stamp="default")
namespace bench_tu_19324 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19324>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19324
