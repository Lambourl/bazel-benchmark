#include "bench/fib.hpp"

// RE Benchmark TU 19597 of 20000 (depth=28, stamp="default")
namespace bench_tu_19597 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19597>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19597
