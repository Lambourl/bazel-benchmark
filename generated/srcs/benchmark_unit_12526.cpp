#include "bench/fib.hpp"

// RE Benchmark TU 12526 of 20000 (depth=28, stamp="default")
namespace bench_tu_12526 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12526>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12526
