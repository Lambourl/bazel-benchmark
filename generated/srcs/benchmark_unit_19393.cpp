#include "bench/fib.hpp"

// RE Benchmark TU 19393 of 20000 (depth=28, stamp="default")
namespace bench_tu_19393 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19393>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19393
