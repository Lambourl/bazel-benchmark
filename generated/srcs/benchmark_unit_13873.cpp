#include "bench/fib.hpp"

// RE Benchmark TU 13873 of 20000 (depth=28, stamp="default")
namespace bench_tu_13873 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13873>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13873
