#include "bench/fib.hpp"

// RE Benchmark TU 19160 of 20000 (depth=28, stamp="default")
namespace bench_tu_19160 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19160>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19160
