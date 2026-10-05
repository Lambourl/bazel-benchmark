#include "bench/fib.hpp"

// RE Benchmark TU 16100 of 20000 (depth=28, stamp="default")
namespace bench_tu_16100 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16100>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16100
