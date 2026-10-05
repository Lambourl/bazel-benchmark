#include "bench/fib.hpp"

// RE Benchmark TU 3114 of 20000 (depth=28, stamp="default")
namespace bench_tu_3114 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3114>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3114
