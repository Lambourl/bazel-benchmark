#include "bench/fib.hpp"

// RE Benchmark TU 824 of 20000 (depth=28, stamp="default")
namespace bench_tu_824 {
constexpr unsigned long long result = ::bench::slow_fib<28, 824>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_824
