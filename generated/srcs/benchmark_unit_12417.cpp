#include "bench/fib.hpp"

// RE Benchmark TU 12417 of 20000 (depth=28, stamp="default")
namespace bench_tu_12417 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12417>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12417
