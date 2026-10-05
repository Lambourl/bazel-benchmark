#include "bench/fib.hpp"

// RE Benchmark TU 19226 of 20000 (depth=28, stamp="default")
namespace bench_tu_19226 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19226>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19226
