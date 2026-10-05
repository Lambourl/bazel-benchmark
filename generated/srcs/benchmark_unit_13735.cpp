#include "bench/fib.hpp"

// RE Benchmark TU 13735 of 20000 (depth=28, stamp="default")
namespace bench_tu_13735 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13735>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13735
