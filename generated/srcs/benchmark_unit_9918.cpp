#include "bench/fib.hpp"

// RE Benchmark TU 9918 of 20000 (depth=28, stamp="default")
namespace bench_tu_9918 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9918>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9918
