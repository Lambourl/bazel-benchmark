#include "bench/fib.hpp"

// RE Benchmark TU 1732 of 20000 (depth=28, stamp="default")
namespace bench_tu_1732 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1732>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1732
