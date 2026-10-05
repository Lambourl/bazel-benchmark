#include "bench/fib.hpp"

// RE Benchmark TU 16687 of 20000 (depth=28, stamp="default")
namespace bench_tu_16687 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16687>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16687
