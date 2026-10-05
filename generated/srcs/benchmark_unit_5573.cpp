#include "bench/fib.hpp"

// RE Benchmark TU 5573 of 20000 (depth=28, stamp="default")
namespace bench_tu_5573 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5573>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5573
