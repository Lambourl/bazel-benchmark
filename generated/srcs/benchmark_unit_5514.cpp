#include "bench/fib.hpp"

// RE Benchmark TU 5514 of 20000 (depth=28, stamp="default")
namespace bench_tu_5514 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5514>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5514
