#include "bench/fib.hpp"

// RE Benchmark TU 3059 of 20000 (depth=28, stamp="default")
namespace bench_tu_3059 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3059>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3059
