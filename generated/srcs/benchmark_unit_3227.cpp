#include "bench/fib.hpp"

// RE Benchmark TU 3227 of 20000 (depth=28, stamp="default")
namespace bench_tu_3227 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3227>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3227
