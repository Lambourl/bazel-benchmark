#include "bench/fib.hpp"

// RE Benchmark TU 19502 of 20000 (depth=28, stamp="default")
namespace bench_tu_19502 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19502>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19502
