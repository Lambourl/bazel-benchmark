#include "bench/fib.hpp"

// RE Benchmark TU 7082 of 20000 (depth=28, stamp="default")
namespace bench_tu_7082 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7082>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7082
