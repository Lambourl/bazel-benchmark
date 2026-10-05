#include "bench/fib.hpp"

// RE Benchmark TU 8075 of 20000 (depth=28, stamp="default")
namespace bench_tu_8075 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8075>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8075
