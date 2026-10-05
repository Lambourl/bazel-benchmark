#include "bench/fib.hpp"

// RE Benchmark TU 17869 of 20000 (depth=28, stamp="default")
namespace bench_tu_17869 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17869>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17869
