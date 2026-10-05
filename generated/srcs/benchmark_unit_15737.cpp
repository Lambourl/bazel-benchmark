#include "bench/fib.hpp"

// RE Benchmark TU 15737 of 20000 (depth=28, stamp="default")
namespace bench_tu_15737 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15737>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15737
