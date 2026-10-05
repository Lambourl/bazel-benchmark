#include "bench/fib.hpp"

// RE Benchmark TU 4449 of 20000 (depth=28, stamp="default")
namespace bench_tu_4449 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4449>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4449
