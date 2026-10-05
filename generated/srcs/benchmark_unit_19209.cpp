#include "bench/fib.hpp"

// RE Benchmark TU 19209 of 20000 (depth=28, stamp="default")
namespace bench_tu_19209 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19209>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19209
