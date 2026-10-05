#include "bench/fib.hpp"

// RE Benchmark TU 9211 of 20000 (depth=28, stamp="default")
namespace bench_tu_9211 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9211>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9211
