#include "bench/fib.hpp"

// RE Benchmark TU 4640 of 20000 (depth=28, stamp="default")
namespace bench_tu_4640 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4640>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4640
