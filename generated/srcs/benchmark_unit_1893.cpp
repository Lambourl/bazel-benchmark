#include "bench/fib.hpp"

// RE Benchmark TU 1893 of 20000 (depth=28, stamp="default")
namespace bench_tu_1893 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1893>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1893
