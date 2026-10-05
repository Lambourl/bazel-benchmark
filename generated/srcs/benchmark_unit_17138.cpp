#include "bench/fib.hpp"

// RE Benchmark TU 17138 of 20000 (depth=28, stamp="default")
namespace bench_tu_17138 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17138>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17138
