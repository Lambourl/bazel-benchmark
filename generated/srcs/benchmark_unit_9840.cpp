#include "bench/fib.hpp"

// RE Benchmark TU 9840 of 20000 (depth=28, stamp="default")
namespace bench_tu_9840 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9840>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9840
