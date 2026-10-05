#include "bench/fib.hpp"

// RE Benchmark TU 1114 of 20000 (depth=28, stamp="default")
namespace bench_tu_1114 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1114>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1114
