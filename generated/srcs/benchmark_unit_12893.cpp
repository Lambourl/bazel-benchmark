#include "bench/fib.hpp"

// RE Benchmark TU 12893 of 20000 (depth=28, stamp="default")
namespace bench_tu_12893 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12893>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12893
