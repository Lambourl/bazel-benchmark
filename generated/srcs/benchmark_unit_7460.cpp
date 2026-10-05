#include "bench/fib.hpp"

// RE Benchmark TU 7460 of 20000 (depth=28, stamp="default")
namespace bench_tu_7460 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7460>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7460
