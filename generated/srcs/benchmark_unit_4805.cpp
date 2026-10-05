#include "bench/fib.hpp"

// RE Benchmark TU 4805 of 20000 (depth=28, stamp="default")
namespace bench_tu_4805 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4805>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4805
