#include "bench/fib.hpp"

// RE Benchmark TU 5184 of 20000 (depth=28, stamp="default")
namespace bench_tu_5184 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5184>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5184
