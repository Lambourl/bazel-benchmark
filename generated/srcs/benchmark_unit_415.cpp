#include "bench/fib.hpp"

// RE Benchmark TU 415 of 20000 (depth=28, stamp="default")
namespace bench_tu_415 {
constexpr unsigned long long result = ::bench::slow_fib<28, 415>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_415
