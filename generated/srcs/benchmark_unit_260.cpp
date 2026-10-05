#include "bench/fib.hpp"

// RE Benchmark TU 260 of 20000 (depth=28, stamp="default")
namespace bench_tu_260 {
constexpr unsigned long long result = ::bench::slow_fib<28, 260>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_260
