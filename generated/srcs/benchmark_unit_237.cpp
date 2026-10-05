#include "bench/fib.hpp"

// RE Benchmark TU 237 of 20000 (depth=28, stamp="default")
namespace bench_tu_237 {
constexpr unsigned long long result = ::bench::slow_fib<28, 237>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_237
