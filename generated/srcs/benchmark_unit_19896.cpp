#include "bench/fib.hpp"

// RE Benchmark TU 19896 of 20000 (depth=28, stamp="default")
namespace bench_tu_19896 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19896>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19896
