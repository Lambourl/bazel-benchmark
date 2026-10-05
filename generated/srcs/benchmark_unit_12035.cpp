#include "bench/fib.hpp"

// RE Benchmark TU 12035 of 20000 (depth=28, stamp="default")
namespace bench_tu_12035 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12035>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12035
