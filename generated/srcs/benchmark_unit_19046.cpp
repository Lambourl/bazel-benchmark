#include "bench/fib.hpp"

// RE Benchmark TU 19046 of 20000 (depth=28, stamp="default")
namespace bench_tu_19046 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19046>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19046
