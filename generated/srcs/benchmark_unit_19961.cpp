#include "bench/fib.hpp"

// RE Benchmark TU 19961 of 20000 (depth=28, stamp="default")
namespace bench_tu_19961 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19961>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19961
