#include "bench/fib.hpp"

// RE Benchmark TU 10879 of 20000 (depth=28, stamp="default")
namespace bench_tu_10879 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10879>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10879
