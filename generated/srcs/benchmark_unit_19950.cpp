#include "bench/fib.hpp"

// RE Benchmark TU 19950 of 20000 (depth=28, stamp="default")
namespace bench_tu_19950 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19950>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19950
