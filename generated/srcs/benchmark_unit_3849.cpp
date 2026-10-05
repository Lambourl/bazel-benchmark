#include "bench/fib.hpp"

// RE Benchmark TU 3849 of 20000 (depth=28, stamp="default")
namespace bench_tu_3849 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3849>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3849
