#include "bench/fib.hpp"

// RE Benchmark TU 11255 of 20000 (depth=28, stamp="default")
namespace bench_tu_11255 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11255>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11255
