#include "bench/fib.hpp"

// RE Benchmark TU 70 of 20000 (depth=28, stamp="default")
namespace bench_tu_70 {
constexpr unsigned long long result = ::bench::slow_fib<28, 70>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_70
