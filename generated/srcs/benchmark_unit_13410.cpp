#include "bench/fib.hpp"

// RE Benchmark TU 13410 of 20000 (depth=28, stamp="default")
namespace bench_tu_13410 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13410>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13410
