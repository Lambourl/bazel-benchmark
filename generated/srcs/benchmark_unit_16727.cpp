#include "bench/fib.hpp"

// RE Benchmark TU 16727 of 20000 (depth=28, stamp="default")
namespace bench_tu_16727 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16727>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16727
