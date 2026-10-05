#include "bench/fib.hpp"

// RE Benchmark TU 16298 of 20000 (depth=28, stamp="default")
namespace bench_tu_16298 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16298>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16298
