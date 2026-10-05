#include "bench/fib.hpp"

// RE Benchmark TU 779 of 20000 (depth=28, stamp="default")
namespace bench_tu_779 {
constexpr unsigned long long result = ::bench::slow_fib<28, 779>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_779
