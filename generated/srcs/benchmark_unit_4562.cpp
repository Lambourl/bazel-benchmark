#include "bench/fib.hpp"

// RE Benchmark TU 4562 of 20000 (depth=28, stamp="default")
namespace bench_tu_4562 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4562>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4562
