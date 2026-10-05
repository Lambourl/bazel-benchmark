#include "bench/fib.hpp"

// RE Benchmark TU 19216 of 20000 (depth=28, stamp="default")
namespace bench_tu_19216 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19216>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19216
