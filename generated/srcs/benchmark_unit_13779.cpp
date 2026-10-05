#include "bench/fib.hpp"

// RE Benchmark TU 13779 of 20000 (depth=28, stamp="default")
namespace bench_tu_13779 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13779>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13779
