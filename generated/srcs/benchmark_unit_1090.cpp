#include "bench/fib.hpp"

// RE Benchmark TU 1090 of 20000 (depth=28, stamp="default")
namespace bench_tu_1090 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1090>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1090
