#include "bench/fib.hpp"

// RE Benchmark TU 8027 of 20000 (depth=28, stamp="default")
namespace bench_tu_8027 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8027>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8027
