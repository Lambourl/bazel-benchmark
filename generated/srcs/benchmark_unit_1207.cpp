#include "bench/fib.hpp"

// RE Benchmark TU 1207 of 20000 (depth=28, stamp="default")
namespace bench_tu_1207 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1207>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1207
