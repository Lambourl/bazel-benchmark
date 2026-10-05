#include "bench/fib.hpp"

// RE Benchmark TU 559 of 20000 (depth=28, stamp="default")
namespace bench_tu_559 {
constexpr unsigned long long result = ::bench::slow_fib<28, 559>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_559
