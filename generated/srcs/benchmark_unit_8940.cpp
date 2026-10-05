#include "bench/fib.hpp"

// RE Benchmark TU 8940 of 20000 (depth=28, stamp="default")
namespace bench_tu_8940 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8940>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8940
