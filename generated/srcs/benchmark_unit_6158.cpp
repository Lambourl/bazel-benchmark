#include "bench/fib.hpp"

// RE Benchmark TU 6158 of 20000 (depth=28, stamp="default")
namespace bench_tu_6158 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6158>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6158
