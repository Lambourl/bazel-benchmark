#include "bench/fib.hpp"

// RE Benchmark TU 5438 of 20000 (depth=28, stamp="default")
namespace bench_tu_5438 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5438>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5438
