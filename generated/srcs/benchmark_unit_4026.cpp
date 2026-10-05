#include "bench/fib.hpp"

// RE Benchmark TU 4026 of 20000 (depth=28, stamp="default")
namespace bench_tu_4026 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4026>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4026
