#include "bench/fib.hpp"

// RE Benchmark TU 14043 of 20000 (depth=28, stamp="default")
namespace bench_tu_14043 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14043>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14043
