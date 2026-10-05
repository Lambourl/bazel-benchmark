#include "bench/fib.hpp"

// RE Benchmark TU 18765 of 20000 (depth=28, stamp="default")
namespace bench_tu_18765 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18765>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18765
