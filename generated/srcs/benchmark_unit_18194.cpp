#include "bench/fib.hpp"

// RE Benchmark TU 18194 of 20000 (depth=28, stamp="default")
namespace bench_tu_18194 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18194>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18194
