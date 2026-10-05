#include "bench/fib.hpp"

// RE Benchmark TU 6430 of 20000 (depth=28, stamp="default")
namespace bench_tu_6430 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6430>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6430
