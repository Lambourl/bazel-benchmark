#include "bench/fib.hpp"

// RE Benchmark TU 12406 of 20000 (depth=28, stamp="default")
namespace bench_tu_12406 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12406>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12406
