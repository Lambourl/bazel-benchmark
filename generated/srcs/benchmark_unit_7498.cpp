#include "bench/fib.hpp"

// RE Benchmark TU 7498 of 20000 (depth=28, stamp="default")
namespace bench_tu_7498 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7498>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7498
