#include "bench/fib.hpp"

// RE Benchmark TU 19972 of 20000 (depth=28, stamp="default")
namespace bench_tu_19972 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19972>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19972
