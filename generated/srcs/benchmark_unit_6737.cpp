#include "bench/fib.hpp"

// RE Benchmark TU 6737 of 20000 (depth=28, stamp="default")
namespace bench_tu_6737 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6737>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6737
