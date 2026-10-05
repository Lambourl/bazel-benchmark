#include "bench/fib.hpp"

// RE Benchmark TU 3237 of 20000 (depth=28, stamp="default")
namespace bench_tu_3237 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3237>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3237
