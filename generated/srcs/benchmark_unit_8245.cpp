#include "bench/fib.hpp"

// RE Benchmark TU 8245 of 20000 (depth=28, stamp="default")
namespace bench_tu_8245 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8245>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8245
