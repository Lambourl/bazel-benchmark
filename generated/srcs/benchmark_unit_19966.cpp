#include "bench/fib.hpp"

// RE Benchmark TU 19966 of 20000 (depth=28, stamp="default")
namespace bench_tu_19966 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19966>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19966
