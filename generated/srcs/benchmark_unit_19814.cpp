#include "bench/fib.hpp"

// RE Benchmark TU 19814 of 20000 (depth=28, stamp="default")
namespace bench_tu_19814 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19814>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19814
