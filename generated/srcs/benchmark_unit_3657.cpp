#include "bench/fib.hpp"

// RE Benchmark TU 3657 of 20000 (depth=28, stamp="default")
namespace bench_tu_3657 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3657>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3657
