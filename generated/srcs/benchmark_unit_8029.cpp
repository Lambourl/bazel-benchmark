#include "bench/fib.hpp"

// RE Benchmark TU 8029 of 20000 (depth=28, stamp="default")
namespace bench_tu_8029 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8029>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8029
