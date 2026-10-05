#include "bench/fib.hpp"

// RE Benchmark TU 4059 of 20000 (depth=28, stamp="default")
namespace bench_tu_4059 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4059>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4059
