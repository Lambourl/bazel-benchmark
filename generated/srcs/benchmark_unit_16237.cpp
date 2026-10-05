#include "bench/fib.hpp"

// RE Benchmark TU 16237 of 20000 (depth=28, stamp="default")
namespace bench_tu_16237 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16237>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16237
