#include "bench/fib.hpp"

// RE Benchmark TU 1073 of 20000 (depth=28, stamp="default")
namespace bench_tu_1073 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1073>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1073
