#include "bench/fib.hpp"

// RE Benchmark TU 7252 of 20000 (depth=28, stamp="default")
namespace bench_tu_7252 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7252>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7252
