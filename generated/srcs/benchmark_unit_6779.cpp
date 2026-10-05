#include "bench/fib.hpp"

// RE Benchmark TU 6779 of 20000 (depth=28, stamp="default")
namespace bench_tu_6779 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6779>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6779
