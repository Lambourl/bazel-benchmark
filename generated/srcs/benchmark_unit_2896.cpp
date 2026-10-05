#include "bench/fib.hpp"

// RE Benchmark TU 2896 of 20000 (depth=28, stamp="default")
namespace bench_tu_2896 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2896>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2896
