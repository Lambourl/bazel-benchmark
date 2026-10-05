#include "bench/fib.hpp"

// RE Benchmark TU 16067 of 20000 (depth=28, stamp="default")
namespace bench_tu_16067 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16067>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16067
