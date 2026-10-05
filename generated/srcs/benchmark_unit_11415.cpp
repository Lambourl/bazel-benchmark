#include "bench/fib.hpp"

// RE Benchmark TU 11415 of 20000 (depth=28, stamp="default")
namespace bench_tu_11415 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11415>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11415
