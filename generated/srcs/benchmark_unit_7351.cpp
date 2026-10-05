#include "bench/fib.hpp"

// RE Benchmark TU 7351 of 20000 (depth=28, stamp="default")
namespace bench_tu_7351 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7351>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7351
