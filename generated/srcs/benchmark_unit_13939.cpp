#include "bench/fib.hpp"

// RE Benchmark TU 13939 of 20000 (depth=28, stamp="default")
namespace bench_tu_13939 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13939>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13939
