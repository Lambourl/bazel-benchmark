#include "bench/fib.hpp"

// RE Benchmark TU 17779 of 20000 (depth=28, stamp="default")
namespace bench_tu_17779 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17779>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17779
