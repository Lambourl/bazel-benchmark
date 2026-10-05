#include "bench/fib.hpp"

// RE Benchmark TU 8814 of 20000 (depth=28, stamp="default")
namespace bench_tu_8814 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8814>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8814
