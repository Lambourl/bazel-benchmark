#include "bench/fib.hpp"

// RE Benchmark TU 5965 of 20000 (depth=28, stamp="default")
namespace bench_tu_5965 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5965>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5965
