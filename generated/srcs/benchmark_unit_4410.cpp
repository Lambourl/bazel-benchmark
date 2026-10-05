#include "bench/fib.hpp"

// RE Benchmark TU 4410 of 20000 (depth=28, stamp="default")
namespace bench_tu_4410 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4410>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4410
