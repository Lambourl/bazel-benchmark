#include "bench/fib.hpp"

// RE Benchmark TU 6274 of 20000 (depth=28, stamp="default")
namespace bench_tu_6274 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6274>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6274
