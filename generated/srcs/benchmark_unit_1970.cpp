#include "bench/fib.hpp"

// RE Benchmark TU 1970 of 20000 (depth=28, stamp="default")
namespace bench_tu_1970 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1970>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1970
