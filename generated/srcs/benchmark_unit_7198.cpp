#include "bench/fib.hpp"

// RE Benchmark TU 7198 of 20000 (depth=28, stamp="default")
namespace bench_tu_7198 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7198>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7198
