#include "bench/fib.hpp"

// RE Benchmark TU 4529 of 20000 (depth=28, stamp="default")
namespace bench_tu_4529 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4529>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4529
