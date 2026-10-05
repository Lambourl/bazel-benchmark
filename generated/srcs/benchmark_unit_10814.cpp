#include "bench/fib.hpp"

// RE Benchmark TU 10814 of 20000 (depth=28, stamp="default")
namespace bench_tu_10814 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10814>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10814
