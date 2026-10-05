#include "bench/fib.hpp"

// RE Benchmark TU 19779 of 20000 (depth=28, stamp="default")
namespace bench_tu_19779 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19779>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19779
