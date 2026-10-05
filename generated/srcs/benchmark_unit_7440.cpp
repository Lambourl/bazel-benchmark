#include "bench/fib.hpp"

// RE Benchmark TU 7440 of 20000 (depth=28, stamp="default")
namespace bench_tu_7440 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7440>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7440
