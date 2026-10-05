#include "bench/fib.hpp"

// RE Benchmark TU 19717 of 20000 (depth=28, stamp="default")
namespace bench_tu_19717 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19717>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19717
