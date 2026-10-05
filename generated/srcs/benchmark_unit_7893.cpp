#include "bench/fib.hpp"

// RE Benchmark TU 7893 of 20000 (depth=28, stamp="default")
namespace bench_tu_7893 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7893>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7893
