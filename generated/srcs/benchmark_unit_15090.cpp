#include "bench/fib.hpp"

// RE Benchmark TU 15090 of 20000 (depth=28, stamp="default")
namespace bench_tu_15090 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15090>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15090
