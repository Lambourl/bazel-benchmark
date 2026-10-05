#include "bench/fib.hpp"

// RE Benchmark TU 8417 of 20000 (depth=28, stamp="default")
namespace bench_tu_8417 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8417>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8417
