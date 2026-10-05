#include "bench/fib.hpp"

// RE Benchmark TU 15273 of 20000 (depth=28, stamp="default")
namespace bench_tu_15273 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15273>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15273
