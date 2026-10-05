#include "bench/fib.hpp"

// RE Benchmark TU 7125 of 20000 (depth=28, stamp="default")
namespace bench_tu_7125 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7125>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7125
