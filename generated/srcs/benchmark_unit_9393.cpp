#include "bench/fib.hpp"

// RE Benchmark TU 9393 of 20000 (depth=28, stamp="default")
namespace bench_tu_9393 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9393>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9393
