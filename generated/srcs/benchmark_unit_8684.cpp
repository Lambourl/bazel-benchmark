#include "bench/fib.hpp"

// RE Benchmark TU 8684 of 20000 (depth=28, stamp="default")
namespace bench_tu_8684 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8684>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8684
