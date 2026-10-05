#include "bench/fib.hpp"

// RE Benchmark TU 11780 of 20000 (depth=28, stamp="default")
namespace bench_tu_11780 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11780>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11780
