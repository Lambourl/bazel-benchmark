#include "bench/fib.hpp"

// RE Benchmark TU 4961 of 20000 (depth=28, stamp="default")
namespace bench_tu_4961 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4961>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4961
