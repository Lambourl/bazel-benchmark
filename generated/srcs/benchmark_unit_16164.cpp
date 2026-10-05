#include "bench/fib.hpp"

// RE Benchmark TU 16164 of 20000 (depth=28, stamp="default")
namespace bench_tu_16164 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16164>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16164
