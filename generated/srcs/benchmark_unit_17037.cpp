#include "bench/fib.hpp"

// RE Benchmark TU 17037 of 20000 (depth=28, stamp="default")
namespace bench_tu_17037 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17037>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17037
