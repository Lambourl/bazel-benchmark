#include "bench/fib.hpp"

// RE Benchmark TU 7491 of 20000 (depth=28, stamp="default")
namespace bench_tu_7491 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7491>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7491
