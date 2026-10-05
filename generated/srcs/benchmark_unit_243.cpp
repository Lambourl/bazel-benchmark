#include "bench/fib.hpp"

// RE Benchmark TU 243 of 20000 (depth=28, stamp="default")
namespace bench_tu_243 {
constexpr unsigned long long result = ::bench::slow_fib<28, 243>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_243
