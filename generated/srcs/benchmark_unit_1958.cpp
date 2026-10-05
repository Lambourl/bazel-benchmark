#include "bench/fib.hpp"

// RE Benchmark TU 1958 of 20000 (depth=28, stamp="default")
namespace bench_tu_1958 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1958>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1958
