#include "bench/fib.hpp"

// RE Benchmark TU 7171 of 20000 (depth=28, stamp="default")
namespace bench_tu_7171 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7171>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7171
