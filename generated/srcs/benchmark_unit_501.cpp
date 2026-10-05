#include "bench/fib.hpp"

// RE Benchmark TU 501 of 20000 (depth=28, stamp="default")
namespace bench_tu_501 {
constexpr unsigned long long result = ::bench::slow_fib<28, 501>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_501
