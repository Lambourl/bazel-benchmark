#include "bench/fib.hpp"

// RE Benchmark TU 967 of 20000 (depth=28, stamp="default")
namespace bench_tu_967 {
constexpr unsigned long long result = ::bench::slow_fib<28, 967>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_967
