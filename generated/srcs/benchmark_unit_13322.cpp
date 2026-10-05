#include "bench/fib.hpp"

// RE Benchmark TU 13322 of 20000 (depth=28, stamp="default")
namespace bench_tu_13322 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13322>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13322
