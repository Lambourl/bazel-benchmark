#include "bench/fib.hpp"

// RE Benchmark TU 10527 of 20000 (depth=28, stamp="default")
namespace bench_tu_10527 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10527>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10527
