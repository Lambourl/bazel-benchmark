#include "bench/fib.hpp"

// RE Benchmark TU 9591 of 20000 (depth=28, stamp="default")
namespace bench_tu_9591 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9591>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9591
