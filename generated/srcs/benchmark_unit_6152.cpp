#include "bench/fib.hpp"

// RE Benchmark TU 6152 of 20000 (depth=28, stamp="default")
namespace bench_tu_6152 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6152>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6152
