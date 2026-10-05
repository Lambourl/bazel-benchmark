#include "bench/fib.hpp"

// RE Benchmark TU 44 of 20000 (depth=28, stamp="default")
namespace bench_tu_44 {
constexpr unsigned long long result = ::bench::slow_fib<28, 44>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_44
