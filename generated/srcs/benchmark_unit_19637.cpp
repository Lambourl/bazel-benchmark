#include "bench/fib.hpp"

// RE Benchmark TU 19637 of 20000 (depth=28, stamp="default")
namespace bench_tu_19637 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19637>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19637
