#include "bench/fib.hpp"

// RE Benchmark TU 8036 of 20000 (depth=28, stamp="default")
namespace bench_tu_8036 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8036>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8036
