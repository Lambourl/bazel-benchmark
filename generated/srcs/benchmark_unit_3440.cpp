#include "bench/fib.hpp"

// RE Benchmark TU 3440 of 20000 (depth=28, stamp="default")
namespace bench_tu_3440 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3440>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3440
