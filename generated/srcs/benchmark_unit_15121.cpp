#include "bench/fib.hpp"

// RE Benchmark TU 15121 of 20000 (depth=28, stamp="default")
namespace bench_tu_15121 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15121>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15121
