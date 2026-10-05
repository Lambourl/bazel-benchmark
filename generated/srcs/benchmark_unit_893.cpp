#include "bench/fib.hpp"

// RE Benchmark TU 893 of 20000 (depth=28, stamp="default")
namespace bench_tu_893 {
constexpr unsigned long long result = ::bench::slow_fib<28, 893>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_893
