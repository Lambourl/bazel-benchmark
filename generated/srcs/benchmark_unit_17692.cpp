#include "bench/fib.hpp"

// RE Benchmark TU 17692 of 20000 (depth=28, stamp="default")
namespace bench_tu_17692 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17692>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17692
