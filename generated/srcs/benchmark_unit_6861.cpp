#include "bench/fib.hpp"

// RE Benchmark TU 6861 of 20000 (depth=28, stamp="default")
namespace bench_tu_6861 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6861>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6861
