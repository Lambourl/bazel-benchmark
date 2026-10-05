#include "bench/fib.hpp"

// RE Benchmark TU 755 of 20000 (depth=28, stamp="default")
namespace bench_tu_755 {
constexpr unsigned long long result = ::bench::slow_fib<28, 755>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_755
