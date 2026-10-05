#include "bench/fib.hpp"

// RE Benchmark TU 1626 of 20000 (depth=28, stamp="default")
namespace bench_tu_1626 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1626>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1626
