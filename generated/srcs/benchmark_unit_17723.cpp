#include "bench/fib.hpp"

// RE Benchmark TU 17723 of 20000 (depth=28, stamp="default")
namespace bench_tu_17723 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17723>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17723
