#include "bench/fib.hpp"

// RE Benchmark TU 13869 of 20000 (depth=28, stamp="default")
namespace bench_tu_13869 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13869>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13869
