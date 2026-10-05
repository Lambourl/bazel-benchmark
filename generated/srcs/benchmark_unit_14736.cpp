#include "bench/fib.hpp"

// RE Benchmark TU 14736 of 20000 (depth=28, stamp="default")
namespace bench_tu_14736 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14736>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14736
