#include "bench/fib.hpp"

// RE Benchmark TU 19188 of 20000 (depth=28, stamp="default")
namespace bench_tu_19188 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19188>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19188
