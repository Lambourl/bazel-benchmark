#include "bench/fib.hpp"

// RE Benchmark TU 16075 of 20000 (depth=28, stamp="default")
namespace bench_tu_16075 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16075>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16075
