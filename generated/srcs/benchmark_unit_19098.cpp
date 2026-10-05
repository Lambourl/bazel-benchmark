#include "bench/fib.hpp"

// RE Benchmark TU 19098 of 20000 (depth=28, stamp="default")
namespace bench_tu_19098 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19098>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19098
