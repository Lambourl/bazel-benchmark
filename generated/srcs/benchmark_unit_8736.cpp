#include "bench/fib.hpp"

// RE Benchmark TU 8736 of 20000 (depth=28, stamp="default")
namespace bench_tu_8736 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8736>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8736
