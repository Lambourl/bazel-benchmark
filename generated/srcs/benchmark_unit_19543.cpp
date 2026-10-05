#include "bench/fib.hpp"

// RE Benchmark TU 19543 of 20000 (depth=28, stamp="default")
namespace bench_tu_19543 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19543>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19543
