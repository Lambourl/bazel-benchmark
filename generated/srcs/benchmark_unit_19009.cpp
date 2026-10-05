#include "bench/fib.hpp"

// RE Benchmark TU 19009 of 20000 (depth=28, stamp="default")
namespace bench_tu_19009 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19009>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19009
