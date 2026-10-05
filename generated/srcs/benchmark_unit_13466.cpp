#include "bench/fib.hpp"

// RE Benchmark TU 13466 of 20000 (depth=28, stamp="default")
namespace bench_tu_13466 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13466>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13466
