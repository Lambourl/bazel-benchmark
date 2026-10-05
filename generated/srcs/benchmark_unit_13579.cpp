#include "bench/fib.hpp"

// RE Benchmark TU 13579 of 20000 (depth=28, stamp="default")
namespace bench_tu_13579 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13579>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13579
