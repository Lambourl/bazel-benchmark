#include "bench/fib.hpp"

// RE Benchmark TU 6079 of 20000 (depth=28, stamp="default")
namespace bench_tu_6079 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6079>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6079
