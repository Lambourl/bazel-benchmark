#include "bench/fib.hpp"

// RE Benchmark TU 5740 of 20000 (depth=28, stamp="default")
namespace bench_tu_5740 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5740>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5740
