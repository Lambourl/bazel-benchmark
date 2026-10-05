#include "bench/fib.hpp"

// RE Benchmark TU 8462 of 20000 (depth=28, stamp="default")
namespace bench_tu_8462 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8462>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8462
