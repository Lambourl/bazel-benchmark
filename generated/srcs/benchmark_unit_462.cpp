#include "bench/fib.hpp"

// RE Benchmark TU 462 of 20000 (depth=28, stamp="default")
namespace bench_tu_462 {
constexpr unsigned long long result = ::bench::slow_fib<28, 462>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_462
