#include "bench/fib.hpp"

// RE Benchmark TU 14300 of 20000 (depth=28, stamp="default")
namespace bench_tu_14300 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14300>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14300
