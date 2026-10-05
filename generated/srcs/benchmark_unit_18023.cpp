#include "bench/fib.hpp"

// RE Benchmark TU 18023 of 20000 (depth=28, stamp="default")
namespace bench_tu_18023 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18023>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18023
