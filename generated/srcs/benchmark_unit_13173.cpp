#include "bench/fib.hpp"

// RE Benchmark TU 13173 of 20000 (depth=28, stamp="default")
namespace bench_tu_13173 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13173>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13173
