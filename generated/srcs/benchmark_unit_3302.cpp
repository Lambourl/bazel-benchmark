#include "bench/fib.hpp"

// RE Benchmark TU 3302 of 20000 (depth=28, stamp="default")
namespace bench_tu_3302 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3302>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3302
