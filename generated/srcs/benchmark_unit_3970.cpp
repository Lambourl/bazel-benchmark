#include "bench/fib.hpp"

// RE Benchmark TU 3970 of 20000 (depth=28, stamp="default")
namespace bench_tu_3970 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3970>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3970
