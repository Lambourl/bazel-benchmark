#include "bench/fib.hpp"

// RE Benchmark TU 12430 of 20000 (depth=28, stamp="default")
namespace bench_tu_12430 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12430>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12430
